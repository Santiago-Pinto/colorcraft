#include "subjectsdialog.h"
#include "ui_subjectsdialog.h"
#include <QDebug>

SubjectsDialog::SubjectsDialog(UIHandler& handler, QWidget *parent) :
    uiHandler(handler),
    QDialog(parent),
    ui(new Ui::SubjectsDialog) {
    ui->setupUi(this);
    QPixmap pm("whitebckg.jpg");
    pm = pm.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pm);
    this->setPalette(palette);
    setWindowTitle("Asignaturas");
    QStringList titles;
    titles << "Codigo" << "Nombre" << "Carga horaria";
    uiHandler.setGridTitles(ui->grdSubjects, titles);
    refresh();
}

void SubjectsDialog::refresh() {
  ui->grdSubjects->setRowCount(0);
  uiHandler.displaySubjects(ui->grdSubjects);
}

SubjectsDialog::~SubjectsDialog() {
    delete ui;
}

void SubjectsDialog::on_newBtn_clicked(){
  this->subjectInputDialog = new SubjectInputDialog(this->uiHandler, this);
  this->subjectInputDialog->show();
}


void SubjectsDialog::on_changesBtn_clicked() {
  QModelIndex index = ui->grdSubjects->selectionModel()->currentIndex();
  QVariant qvSubject = index.sibling(index.row(), 1).data();
  QString subject = qvSubject.toString();
  QVariant qvLoad = index.sibling(index.row(), 2).data();
  QString load = qvLoad.toString();
  this->subjectChangeDialog = new SubjectChangeDialog
                                         (this->uiHandler, subject, load, this);
  this->subjectChangeDialog->show();
}

void SubjectsDialog::on_removeBtn_clicked() {
  ui->removeBtn->setEnabled(false);
  QModelIndex index = ui->grdSubjects->selectionModel()->currentIndex();
  QString subject = index.sibling(index.row(), 1).data().toString();
  uiHandler.deleteSubject(subject);
  ui->removeBtn->setEnabled(true);
  refresh();
}
