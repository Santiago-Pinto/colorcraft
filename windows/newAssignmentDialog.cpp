#include "newAssignmentDialog.h"
#include "ui_newassignmentdialog.h"
#include "assignmentsDialog.h"

NewAssignmentDialog::NewAssignmentDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::NewAssignmentDialog) {
    ui->setupUi(this);
    QPixmap pm("whitebckg.jpg");
    pm = pm.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pm);
    this->setPalette(palette);
    setWindowTitle("Nueva Asignacion");
    uiHandler.loadComboBoxWithCourses(ui->cmbCourse);
    uiHandler.loadComboBoxWithSubjects(ui->cmbSubject);
}

NewAssignmentDialog::~NewAssignmentDialog() {
    delete ui;
}

void NewAssignmentDialog::on_btnAssign_clicked() {
  uiHandler.newAssignment(ui->cmbCourse, ui->cmbProfessor);
  ((AssignmentsDialog*)(parent()))->refresh();
  close();
}

void NewAssignmentDialog::on_btnExit_clicked() {
  close();
}


void NewAssignmentDialog::on_cmbSubject_currentTextChanged(const QString &arg1){
  ui->cmbProfessor->clear();
  uiHandler.loadComboBoxWithProfessors(ui->cmbProfessor, ui->cmbSubject);
}
