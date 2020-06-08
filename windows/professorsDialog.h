#ifndef PROFESSORSDIALOG_H
#define PROFESSORSDIALOG_H

#include <QDialog>
#include "uiHandler.h"
#include "availabilityCheckView.h"

namespace Ui {
class ProfessorsDialog;
}

class ProfessorsDialog : public QDialog {
    Q_OBJECT

public:
    explicit ProfessorsDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~ProfessorsDialog();

private slots:
    void on_btnConsult_clicked();
    void on_btnModify_clicked();
    void on_btnRemove_clicked();

private:
    UIHandler& uiHandler;
    AvailabilityCheckView* availabilityCheckView;
    Ui::ProfessorsDialog *ui;
    void refresh();
};

#endif // PROFESSORSDIALOG_H
