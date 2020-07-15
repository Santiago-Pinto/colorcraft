#include "painter.h"
#include <algorithm>    // std::random_shuffle
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <map>
#define SWAP_LIMIT 5000
#define ITERATION_LIMIT 5000
#define NUMBER_OF_COLORINGS 4
#include <iostream>
using namespace std;
using std::set;
using std::vector;
using std::next_permutation;
using std::random_shuffle;
using std::string;
using std::to_string;
using std::map;
using std::pair;
using std::sort;

Coloring Painter::startup(unsigned int numberOfIterations,
                          unsigned int colorBound, nodeVec nodes) {
  set<short> usedColors;
  unsigned int functional = 0;
  Coloring bestColoring;

  for (unsigned int j = 0; j < numberOfIterations; ++j){
    this->resetColors(nodes);
    srand(time(0));
    random_shuffle(nodes.begin(), nodes.end());
    usedColors.clear();
    functional = 0;
    short currentColor;
    for (unsigned int i = 0; i < nodes.size(); ++i) {
      currentColor = this->chooseColor(nodes[i]);
      usedColors.insert(currentColor);
      functional += nodes[i]->assignColor(currentColor);
    }
    unsigned int minimumFunctional = bestColoring.getFunctional();
    functional += usedColors.size();

    if ((!minimumFunctional || functional < minimumFunctional) &&
        (usedColors.size() <= colorBound)) {
      bestColoring.clear();
      for (unsigned int k = 0; k < nodes.size(); ++k)
        bestColoring.addPaintedNode(nodes[k]);
      refine(bestColoring, colorBound);
    }
  }
  return bestColoring;
}


void Painter::reorder(vector<short>& colors) {
  next_permutation(colors.begin(), colors.end());
}


Coloring Painter::colorSwap(Coloring& coloring) {

  Coloring bestColoring = coloring;
  int colorsUsed = coloring.getNumberOfColorsUsed();
  vector<short> colors;
  for (int i = 1; i <= colorsUsed; ++i) {
    colors.push_back(i);
  }

  vector<Node> nodes = bestColoring.getNodes();
  Coloring newColoring(nodes);
  for (unsigned int i = 0; i< SWAP_LIMIT ; ++i) {
    nodes = newColoring.getNodes();
    newColoring.clear();
    reorder(colors);
    for (Node node: nodes) {
      short color = node.getColor();
      node.assignColor(colors[color-1]);
      newColoring.addPaintedNode(&node);
    }
    if (newColoring.getFunctional() < bestColoring.getFunctional()) {
      cout<< "Viejo funcional: " << bestColoring.getFunctional();
      cout << " Nuevo funcional: " << newColoring.getFunctional() <<endl;
      bestColoring = newColoring;
    }
  }
  return bestColoring;
}

bool compareNodes(Node& first, Node& second) {
  return (first.getGrade() > second.getGrade());
}

void Painter::refine(Coloring& coloring, int colorBound) {
  unsigned int oldFunctional = coloring.getFunctional();
  vector<Node> conflictNodes;
  for (Node node: coloring.getNodes()){
    if (!node.meetsAllRestrictions())
      conflictNodes.push_back(node);
  }

  sort(conflictNodes.begin(), conflictNodes.end(), compareNodes);
  for (Node node: conflictNodes){
    set<short> adjColors;
    for (Node* adj:node.getAdjacents()) {
      adjColors.insert(adj->getColor());
    }

    for (int i = 1; i <= colorBound; ++i) {

      if ((adjColors.find(i) == adjColors.end()) && (node.getColor() != i)){
        coloring.replaceColor(&node, i);
      }
    }
    adjColors.clear();
  }
  cout<< "Viejo funcional:" << oldFunctional <<" Refinado: " << coloring.getFunctional() <<endl;
}


short Painter::chooseColor(Node* node) {
  short currentColor = 1;
  vector<Node*> adjacents = node->getAdjacents();
  unsigned int i = 0;

  while (i< adjacents.size()) {
    Node* neighbor = adjacents[i];
    if (neighbor->getColor() ==  currentColor) {
      i = 0;
      ++currentColor;
    } else {
      ++i;
    }
  }
  return currentColor;
}

void Painter::resetColors(nodeVec& nodes) {
  for (unsigned int i = 0; i < nodes.size(); ++i)
    nodes[i]->assignColor(0);
}

Coloring Painter::getMinimum(std::vector<Coloring>& colorings) {
  Coloring bestColoring = colorings.front();
  for (int i = 1; i < colorings.size(); ++i) {
    if (colorings[i].getFunctional() < bestColoring.getFunctional())
      bestColoring = colorings[i];
  }
  return bestColoring;
}

/************************PUBLIC METHODS*******************************/

Painter::Painter() {
  //Ctor
}


Coloring Painter::paint(unsigned int numberOfIterations,
                        unsigned int colorBound, nodeVec& nodes) {


  vector<Coloring> colorings;
  int j = 0;
  for (int i = 0; i<NUMBER_OF_COLORINGS; ++i) {
    colorings.push_back(startup(numberOfIterations, colorBound, nodes));
    colorings[i]= colorSwap(colorings[i]);
  }
  return getMinimum(colorings);
}
