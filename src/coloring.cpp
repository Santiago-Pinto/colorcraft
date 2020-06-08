#include <iostream>
#include "coloring.h"
#include "parser.h"
using std::vector;
using std::string;
using std::to_string;
using std::cout;
using std::endl;

Coloring::Coloring(): numberOfColorsUsed(0), functional(0) {}

Coloring::Coloring(vector<string>& nodes): nodes(nodes), numberOfColorsUsed(0),
                                           functional(0) {
  //Ctor
}



void Coloring::setNumberOfColorsUsed(short number) {
  this->numberOfColorsUsed = number;
}

short Coloring::getNumberOfColorsUsed() {
  return this->numberOfColorsUsed;
}

void Coloring::setFunctional(unsigned int functional) {
  this->functional = functional;
}

unsigned int Coloring::getFunctional() {
  return this->functional;
}

void Coloring::addPaintedNode(Node* node) {
  string element = node->getLabel() + ", Color: ";
  element += to_string (node->getColor());
  element += ",Cumple restricciones:" + to_string(node->meetsAllRestrictions());
  this->nodes.push_back(element);
}

void Coloring::clear() {
  this->nodes.clear();
}

vector<string> Coloring::getAsStringList() {
  vector<string> list;
  for (auto node: this->nodes) {
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
  for (unsigned int i=0; i < this->nodes.size(); ++i)
    cout<<"(" + this->nodes[i] + ")"<<endl;
  cout<< "Cantidad de colores usados: ";
  cout<< to_string(this->numberOfColorsUsed)<<endl;
  cout<< "Funcional: " + to_string(this->functional) <<endl;
}
