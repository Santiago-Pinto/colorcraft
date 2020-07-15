#include <iostream>
#include "coloring.h"
#include "parser.h"
using std::set;
using std::vector;
using std::string;
using std::to_string;
using std::cout;
using std::endl;

Coloring::Coloring(){
  //ctor
}

Coloring::Coloring(vector<Node>& nodes): nodes(nodes) {
  //Ctor
  for (Node node: nodes)
    this->strNodes.push_back(node.getLabel());
}

Coloring::Coloring(vector<string>& nodes): strNodes(nodes) {
  //Ctor
}

short Coloring::getNumberOfColorsUsed() {
  if (this->nodes.size()) {
    set<short> usedColors;
    for (auto node: this->nodes)
      usedColors.insert(node.getColor());
    return usedColors.size();
  }
  return 0;
}

unsigned int Coloring::getFunctional() {
  unsigned int functional = 0;
  if (this->nodes.size()) {
    for (auto node: this->nodes) {
      functional += node.assignColor(node.getColor());
    }
  }
  return functional + this->getNumberOfColorsUsed();
}

void Coloring::addPaintedNode(Node* node) {
  string element = node->getLabel() + ", Color: ";
  element += to_string (node->getColor());
  element += ",Cumple restricciones:" + to_string(node->meetsAllRestrictions());
  this->strNodes.push_back(element);
  this->nodes.push_back(*node);
}

void Coloring::clear() {
  this->strNodes.clear();
  this->nodes.clear();
}

vector<string> Coloring::getAsStringList() {
  vector<string> list;
  for (auto node: this->strNodes) {
    for(auto str: parser::parseColoring(node))
      list.push_back(str);
  }

  return list;
}

Coloring Coloring::getCourseColoring(string course) {
  vector<Node> courseNodes;

   for (Node node: this->nodes) {
     if (node.getCourse() == course)
      courseNodes.push_back(node);
   }
  return Coloring(courseNodes);
}


vector<Node> Coloring::getNodes() {
  return this->nodes;
}

void Coloring::replaceColor(Node* node, short color) {

  for (unsigned int i = 0; i <this->nodes.size(); ++i) {
    if (this->nodes[i].getLabel() ==  node->getLabel()) {
      this->nodes[i].assignColor(color);

      for (auto adjacent: this->nodes[i].getAdjacents()) {
        for (auto adjOfAdj: adjacent->getAdjacents()) {
          if (adjOfAdj->getLabel() == node->getLabel())
            adjOfAdj->assignColor(color);
        }
      }

    }
  }
}


void Coloring::print() {
  for (auto node: this->nodes)
    cout<<"(" + node.getLabel() + ")"<<endl;
  cout<< "Cantidad de colores usados: ";
  cout<< to_string(this->getNumberOfColorsUsed())<<endl;
  cout<< "Funcional: " + to_string(this->getFunctional()) <<endl;
}


/*******************For debugging purposes**********************************/
void Coloring::printAdjInfo() {
  vector<Node> adjacents = this->getNodes();
  for (Node node: adjacents) {
    for(Node* adj: node.getAdjacents())
      cout<<adj->getLabel()<<endl;
  }
  cout<<"------------------------------------"<<endl;
}
