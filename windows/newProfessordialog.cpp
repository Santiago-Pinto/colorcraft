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
}

newProfessorDialog::~newProfessorDialog() {
    delete ui;
}

void newProfessorDialog::on_grdAvailability_cellClicked(int row, int column) {

}

void newProfessorDialog::on_btnAccept_clicked() {

}

void newProfessorDialog::on_btnExit_clicked() {
    close();
}
