#include "node.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

Node::Node(std::string label, unsigned int profId): label(label), color(0),
 profId(profId) {
   //ctor
 }


void Node::addNeighbor(Node& other) {
  this->adjacents.push_back(&other);
}


int Node::assignColor(short color) {
  this->color = color;
  if (!this->meetsAllRestrictions()) {
    return PENALTY;
  }
  return 0;
}

short Node::getColor() {
  return this->color;
}

unsigned short Node::getGrade() {
  return this->adjacents.size();
}

string Node::getCourse() {
  size_t begin = 0;

  begin = this->label.find("-", 0);
  return this->label.substr(0, begin);
}

string Node::getLabel(){
  string label = this->label + ", Color: "  + to_string(this->getColor());
  label += ",Cumple restricciones:" + to_string(this->meetsAllRestrictions());
  return label;
}

void Node::addPenalty(short color){
  this->penalties.insert(color);
}

vector<Node*>& Node::getAdjacents() {
  return this->adjacents;
}

unsigned int Node::getProfId() {
  return this->profId;
}

bool Node::meetsAllRestrictions() {
  return (this->penalties.find(this->color) == this->penalties.end());
}


/******** Metodos usados para debuggear, borrar despues *******/
void Node::printInfo() {
  cout<<"(" + this->getLabel() + ", Grade: " + to_string(this->getGrade());
  cout<<", Color:" + to_string(this->color) + ")"<<endl;
}

void Node::printPenalties() {
  cout<<"(" + this->getLabel() + ")"<<endl;
  for (auto penalty: this->penalties) {
    cout<<penalty<<endl;
  }
  cout<<endl;
}
