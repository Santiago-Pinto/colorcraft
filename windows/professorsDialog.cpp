#include "professorsDialog.h"
#include "ui_professorsdialog.h"

ProfessorsDialog::ProfessorsDialog(UIHandler& handler, QWidget *parent) :
    uiHandler(handler), QDialog(parent),
    ui(new Ui::ProfessorsDialog) {
    ui->setupUi(this);
    setWindowTitle("Profesores");
    QStringList titles;
    titles << "Legajo" << "Nombre" << "Materia";
    uiHandler.setGridTitles(ui->grdProfessors, titles);
    refresh();
}

ProfessorsDialog::~ProfessorsDialog(){
    delete availabilityCheckView;
    delete ui;
}


void ProfessorsDialog::refresh() {
  ui->grdProfessors->setRowCount(0);
  uiHandler.displayProfessors(ui->grdProfessors);
}

void ProfessorsDialog::on_btnConsult_clicked() {
  QModelIndex index = ui->grdProfessors->selectionModel()->currentIndex();
  QVariant qvId = index.sibling(index.row(), 0).data();
  QString id = qvId.toString();
  QVariant qvName = index.sibling(index.row(), 1).data();
  QString name = qvName.toString();
  this->availabilityCheckView = new AvailabilityCheckView
                                         (this->uiHandler, id, name, this);
  this->availabilityCheckView->show();
}

void ProfessorsDialog::on_btnModify_clicked() {

}

void ProfessorsDialog::on_btnRemove_clicked() {
  ui->btnRemove->setEnabled(false);
  QModelIndex index = ui->grdProfessors->selectionModel()->currentIndex();
  QString id = index.sibling(index.row(), 0).data().toString();
  uiHandler.deleteProfessor(id);
  ui->btnRemove->setEnabled(true);
  refresh();
}
