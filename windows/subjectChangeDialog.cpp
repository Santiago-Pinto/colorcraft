#include "subjectChangeDialog.h"
#include "ui_subjectchangedialog.h"
#include "subjectsdialog.h"
using std::string;

SubjectChangeDialog::SubjectChangeDialog(UIHandler& handler, QString& subject,
                                         QString& load,QWidget *parent):
    QDialog(parent), uiHandler(handler),
    ui(new Ui::SubjectChangeDialog) {
    ui->setupUi(this);
    setWindowTitle("Modificacion Asignatura");
    ui->lblSelected->setText(subject);
    ui->lblLoad->setText(load);
}

SubjectChangeDialog::~SubjectChangeDialog() {
    delete ui;
}

void SubjectChangeDialog::on_btnAccept_clicked() {
  QString name = ui->lblSelected->text();
  QString load = ui->txtLoad->toPlainText();
  uiHandler.updateSubject(name,load);
  ((SubjectsDialog*)(parent()))->refresh();
  close();
}

void SubjectChangeDialog::on_btnExit_clicked() {
  close();
}
