#include "newProfessordialog.h"
#include "ui_newProfessordialog.h"

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
  int rows = ui->grdAvailability->rowCount();
  int cols = ui->grdAvailability->columnCount();

}

void newProfessorDialog::on_btnExit_clicked() {
    close();
}
