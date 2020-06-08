#ifndef COMBOBOX_H_INCLUDED
#define COMBOBOX_H_INCLUDED

#include <QtWidgets/QComboBox>

class CmbBoxHandler {
  private:


  public:
    CmbBoxHandler();
    ~CmbBoxHandler();

    //Gets the current selected value on the combo box
    std::string getValue(QComboBox*& cmbBox);

    //Adds a new element to the combo box list
    void addItem(QComboBox*& cmbBox, std::string& item);
};
#endif // COMBOBOX_H_INCLUDED
