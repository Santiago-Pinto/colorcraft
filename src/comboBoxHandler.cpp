#include "comboBoxHandler.h"
using std::string;

CmbBoxHandler::CmbBoxHandler() {
  //Ctor
}

CmbBoxHandler::~CmbBoxHandler() {
  //Dtor
}


string CmbBoxHandler::getValue(QComboBox*& cmbBox) {
  return cmbBox->currentText().toUtf8().constData();
}


void CmbBoxHandler::addItem(QComboBox*& cmbBox, string& item) {
  QString value = QString::fromStdString(item);
  cmbBox->addItem(value);
}
