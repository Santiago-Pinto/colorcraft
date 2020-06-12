#include "newAssignmentDialog.h"
#include "ui_newassignmentdialog.h"

NewAssignmentDialog::NewAssignmentDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::NewAssignmentDialog) {
    ui->setupUi(this);
    setWindowTitle("Nueva Asignacion");
    uiHandler.loadComboBoxWithCourses(ui->cmbCourse);
}

NewAssignmentDialog::~NewAssignmentDialog() {
    delete ui;
}

void NewAssignmentDialog::on_btnAssign_clicked() {

}

void NewAssignmentDialog::on_btnExit_clicked() {
  close();
}

void NewAssignmentDialog::on_cmbCourse_currentTextChanged(const QString &arg1) {

}

void NewAssignmentDialog::on_cmbProfessor_currentTextChanged(const QString &arg1) {

}

void NewAssignmentDialog::on_cmbSubject_currentTextChanged(const QString &arg1){

}
