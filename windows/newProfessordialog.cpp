#include "newProfessordialog.h"
#include "ui_newProfessordialog.h"
#include "professorsDialog.h"
using std::string;

newProfessorDialog::newProfessorDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::newProfessorDialog) {
    ui->setupUi(this);
    setWindowTitle("Nuevo Profesor");
    QStringList titles;
    titles << "Lunes" << "Martes" << "Miercoles" << "Jueves" << "Viernes";
    uiHandler.setGridTitles(ui->grdAvailability, titles);
    uiHandler.loadComboBoxWithSubjects(ui->cmbSubject);
    uiHandler.formatGrid(ui->grdAvailability);
    uiHandler.paintGrid(ui->grdAvailability, Qt::red);
}

newProfessorDialog::~newProfessorDialog() {
    delete ui;
}

void newProfessorDialog::on_grdAvailability_cellClicked(int row, int column) {
  if(ui->grdAvailability->item(row, column)->background().color() == Qt::red)
    uiHandler.paintCell(ui->grdAvailability, row, column, Qt::green);
  else
    uiHandler.paintCell(ui->grdAvailability, row, column, Qt::red);
  ui->grdAvailability->setCurrentCell(-1,-1);
}


void newProfessorDialog::on_btnAccept_clicked() {
  ui->btnAccept->setEnabled(false);
  int rows = ui->grdAvailability->rowCount();
  int cols = ui->grdAvailability->columnCount();
  string availability;
  for (int col = 0; col < cols; ++col) {
    for (int row = 0; row < rows; ++row) {
      if (ui->grdAvailability->item(row, col)->background().color() == Qt::red)
        availability += '0';
      else
        availability += '1';
    }
  }
  QString name = ui->txtName->toPlainText();
  uiHandler.newProfessor(name, ui->cmbSubject, availability);
  ((ProfessorsDialog*)(parent()))->refresh();
  close();
}

void newProfessorDialog::on_btnExit_clicked() {
    close();
}
