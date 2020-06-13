#ifndef NEWPROFESSORDIALOG_H
#define NEWPROFESSORDIALOG_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class newProfessorDialog;
}

class newProfessorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newProfessorDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~newProfessorDialog();

private slots:
    void on_grdAvailability_cellClicked(int row, int column);
    void on_btnAccept_clicked();
    void on_btnExit_clicked();

private:
    Ui::newProfessorDialog *ui;
    UIHandler& uiHandler;
};

#endif // NEWPROFESSORDIALOG_H
