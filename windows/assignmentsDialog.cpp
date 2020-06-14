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

void AssignmentsDialog::on_btnNew_clicked() {
  this->newAssignmentDialog = new NewAssignmentDialog
                                         (this->uiHandler, this);
  this->newAssignmentDialog->show();
}

void AssignmentsDialog::on_btnDelete_clicked() {
  ui->btnDelete->setEnabled(false);
  QModelIndex index = ui->grdAssignments->selectionModel()->currentIndex();
  QString course = index.sibling(index.row(), 0).data().toString();
  QString professor = index.sibling(index.row(), 1).data().toString();
  QString subject = index.sibling(index.row(), 2).data().toString();
  uiHandler.deleteAssignment(course, professor, subject);
  ui->btnDelete->setEnabled(true);
  refresh();
}
