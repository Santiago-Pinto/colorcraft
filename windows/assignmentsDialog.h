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

private:
    Ui::AssignmentsDialog *ui;
    UIHandler& uiHandler;
};

#endif // ASSIGNMENTSDIALOG_H
