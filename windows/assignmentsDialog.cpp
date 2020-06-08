#include "assignmentsDialog.h"
#include "ui_assignmentsDialog.h"


void AssignmentsDialog::refresh() {
  ui->grdAssignments->setRowCount(0);
  uiHandler.displayAssignments(ui->grdAssignments);
}

/************************Public**************************/
AssignmentsDialog::AssignmentsDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::AssignmentsDialog) {
    ui->setupUi(this);
    setWindowTitle("Asignaciones de profesores y cursos");
    QStringList titles;
    titles << "Curso" << "Profesor" << "Materia";
    uiHandler.setGridTitles(ui->grdAssignments, titles);
    uiHandler.displayAssignments(ui->grdAssignments);
}

AssignmentsDialog::~AssignmentsDialog()
{
    delete ui;
}
