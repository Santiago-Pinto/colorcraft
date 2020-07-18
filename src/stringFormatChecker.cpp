#include "stringFormatChecker.h"
#define DECIMAL 10

StringFormatChecker::StringFormatChecker() {
  //ctor
}

StringFormatChecker::~StringFormatChecker() {
  //dtor
}


bool StringFormatChecker::isPositiveNumber(QString& qString) {
  bool isNumeric = false;
  int decimal = qString.toInt(&isNumeric, DECIMAL);
  return (isNumeric && decimal > 0);
}
