#ifndef NEWASSIGNMENTDIALOG_H
#define NEWASSIGNMENTDIALOG_H

#include <QDialog>
#include "uiHandler.h"


namespace Ui {
class NewAssignmentDialog;
}

class NewAssignmentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewAssignmentDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~NewAssignmentDialog();

private slots:
    void on_btnAssign_clicked();
    void on_btnExit_clicked();
    void on_cmbSubject_currentTextChanged(const QString &arg1);

private:
    Ui::NewAssignmentDialog *ui;
    UIHandler& uiHandler;
};

#endif // NEWASSIGNMENTDIALOG_H
