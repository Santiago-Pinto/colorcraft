#ifndef PROFESSORCHANGEDIALOG_H
#define PROFESSORCHANGEDIALOG_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class ProfessorChangeDialog;
}

class ProfessorChangeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProfessorChangeDialog(UIHandler& handler,
                                  QString& id,
                                  QString& name,
                                  QWidget *parent = nullptr);
    ~ProfessorChangeDialog();

private slots:
    void on_btnUpdate_clicked();
    void on_btnExit_clicked();
    void on_grdAvailability_cellClicked(int row, int col);

private:
    Ui::ProfessorChangeDialog *ui;
    UIHandler& uiHandler;
    QString profId;
};

#endif // PROFESSORCHANGEDIALOG_H
