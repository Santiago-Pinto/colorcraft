#include "painter.h"
#include <algorithm>    // std::random_shuffle
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <map>
#define SWAP_LIMIT 20000
using std::set;
using std::vector;
using std::next_permutation;
using std::random_shuffle;
using std::string;
using std::to_string;
using std::map;
using std::pair;

Coloring Painter::startup(unsigned int numberOfIterations,
                          unsigned int colorBound, nodeVec& nodes) {
  set<short> usedColors;
  unsigned int functional = 0;
  Coloring bestColoring;
  this->nodes = nodes;

  for (unsigned int j = 0; j < numberOfIterations; ++j){
    srand(time(0));
    random_shuffle(this->nodes.begin(), this->nodes.end());
    usedColors.clear();
    functional = 0;
    short currentColor;
    for (unsigned int i = 0; i < this->nodes.size(); ++i) {
      Node* current = this->nodes[i];
      currentColor = this->chooseColor(current);
      usedColors.insert(currentColor);
      functional += current->assignColor(currentColor);
    }
    functional += usedColors.size();
    unsigned int minimumFunctional = bestColoring.getFunctional();
    if ((!minimumFunctional || functional < minimumFunctional) &&
        (usedColors.size() <= colorBound)) {
      bestColoring.clear();
      for (unsigned int k = 0; k < this->nodes.size(); ++k)
        bestColoring.addPaintedNode(this->nodes[k]);
    }
    this->resetColors();
  }
  this->lastColoring = bestColoring;
  return bestColoring;
}

#include <iostream>
using namespace std;
void Painter::reorder(vector<short>& colors) {

  srand(time(0));
  random_shuffle(colors.begin(), colors.end());
}


Coloring Painter::colorSwap(Coloring& coloring) {
  Coloring bestColoring = coloring;
  int colorsUsed = coloring.getNumberOfColorsUsed();
  vector<short> colors;
  for (int i = 0; i < colorsUsed; ++i) {
    colors.push_back(i+1);
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
      cout<< "Viejo funcional: " << bestColoring.getFunctional() << " Nuevo funcional: " << newColoring.getFunctional() <<endl;
      bestColoring = newColoring;
    }
  }
  return bestColoring;
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

void Painter::resetColors() {
  for (unsigned int i = 0; i < this->nodes.size(); ++i)
    nodes[i]->assignColor(0);
}

/************************PUBLIC METHODS*******************************/

Painter::Painter() {
  //Ctor
}

Coloring Painter::paint(unsigned int numberOfIterations,
                        unsigned int colorBound, nodeVec& nodes) {
  Coloring greedyColoring = startup(numberOfIterations, colorBound, nodes);
  return colorSwap(greedyColoring);
}


Coloring Painter::getLastColoring() {
   //Doesn't check if it's set so far
   return this->lastColoring;
}

/**Metodos para debuggear**/

void Painter::printResult() {
  for (unsigned int i = 0; i < this->nodes.size(); ++i)
    nodes[i]->printInfo();
}
