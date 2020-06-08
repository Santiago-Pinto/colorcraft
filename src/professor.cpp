#include <iostream>
#include "professor.h"
using namespace std;

Professor::Professor() {
  //ctor
}


Professor::Professor(unsigned int id,string name,string subject, string availability):
    id(id), name(name), subject(subject), availability(availability) {
  //ctor
}

unsigned int Professor::getId(){
  return this->id;
}

string Professor::getName(){
  return this->name;
}

string Professor::getSubject(){
  return this->subject;
}

string Professor::getAvailability(){
  return this->availability;
}

void Professor::printInfo() {
  cout<<"Legajo: " + to_string(this->id)<<endl;
  cout<<"Nombre: " + this->name<<endl;
  cout<<"Materia: " + this->subject<<endl;
  cout<<"Disponibilidad: " + this->availability<<endl;
}
