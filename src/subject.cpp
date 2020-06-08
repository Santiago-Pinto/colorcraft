
#include <iostream>
#include "subject.h"
using std::string;
using std::cout;
using std::endl;
using std::to_string;


Subject::Subject(unsigned int id,std::string name, unsigned int weeklyWorkload):
  id(id), name(name), weeklyWorkload(weeklyWorkload) {
    //ctor
  }

unsigned int Subject::getId() {
  return this->id;
}

string Subject::getName() {
  return this->name;
}

unsigned int Subject::getLoad() {
  return this->weeklyWorkload;
}

void Subject::printInfo() {
  cout<<"Codigo: " + to_string(this->id)<<endl;
  cout<<"Nombre: " + this->name<<endl;
  cout<<"Carga horaria semanal: " + to_string(this->weeklyWorkload)<<endl<<endl;
}
