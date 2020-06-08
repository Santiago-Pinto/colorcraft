#include "assignmentsDialog.h"
#include "ui_assignmentsDialog.h"

AssignmentsDialog::AssignmentsDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent), uiHandler(handler),
    ui(new Ui::AssignmentsDialog)
{
    ui->setupUi(this);
}

AssignmentsDialog::~AssignmentsDialog()
{
    delete ui;
}
