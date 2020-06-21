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
  this->nodes.push_back(*node); //*
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
  vector<string> list = this->getAsStringList();
  vector<string> courseNodes;

  for (unsigned int i = 0; i < list.size(); i+=4) {
    string group = list[i];
    string subject = list[i+1] ;
    string professor = list[i+2];
    string color = list[i+3];
    if (group == course) {
      string element = group + "-" + subject + "-" + professor +"()";
      element += ", Color: ";
      element += color;
      element += ",Cumple restricciones:0";
      courseNodes.push_back(element);
    }
  }

  return Coloring(courseNodes);
}



void Coloring::print() {
  for (unsigned int i=0; i < this->strNodes.size(); ++i)
    cout<<"(" + this->strNodes[i] + ")"<<endl;
  cout<< "Cantidad de colores usados: ";
  cout<< to_string(this->getNumberOfColorsUsed())<<endl;
  cout<< "Funcional: " + to_string(this->getFunctional()) <<endl;
}
