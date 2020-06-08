#include <iostream>
#include "assignment.h"
using std::string;
using std::cout;
using std::endl;
using std::to_string;


Assignment::Assignment(unsigned int profId, std::string group):
                        profId(profId), group(group) {
  //ctor
}

unsigned int Assignment::getProfId() {
  return this->profId;
}

string Assignment::getGroup() {
  return this->group;
}

void Assignment::printInfo() {
  cout<<"Id profesor: " + to_string(this->profId)<<endl;
  cout<<"Curso: " + this->group<<endl;
}
