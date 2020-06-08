#ifndef ASSIGNMENTSDIALOG_H
#define ASSIGNMENTSDIALOG_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class AssignmentsDialog;
}

class AssignmentsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AssignmentsDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~AssignmentsDialog();

private slots:
    void on_btnNew_clicked();
    void on_btnDelete_clicked();

private:
    Ui::AssignmentsDialog *ui;
    UIHandler& uiHandler;
    void refresh();
};

#endif // ASSIGNMENTSDIALOG_H
