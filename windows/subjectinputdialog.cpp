#include "subjectinputdialog.h"
#include "ui_subjectinputdialog.h"
#include "subjectsdialog.h"
using std::string;

SubjectInputDialog::SubjectInputDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::SubjectInputDialog){
    ui->setupUi(this);
    setWindowTitle("Nueva Asignatura");
}

SubjectInputDialog::~SubjectInputDialog()
{
    delete ui;
}


void SubjectInputDialog::on_btnAccept_clicked(){
  QString name = ui->txtName->toPlainText();
  QString load = ui->txtLoad->toPlainText();
  uiHandler.newSubject(name, load);
  ((SubjectsDialog*)(parent()))->refresh();
  close();
}
