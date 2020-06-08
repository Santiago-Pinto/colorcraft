#ifndef SUBJECTSDIALOG_H
#define SUBJECTSDIALOG_H

#include <QDialog>
#include "uiHandler.h"
#include "subjectinputdialog.h"
#include "subjectChangeDialog.h"

namespace Ui {
class SubjectsDialog;
}

class SubjectsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubjectsDialog(UIHandler& handler, QWidget *parent);
    ~SubjectsDialog();
    void refresh();

private slots:
    void on_newBtn_clicked();
    void on_changesBtn_clicked();
    void on_removeBtn_clicked();

private:
    UIHandler& uiHandler;
    SubjectInputDialog* subjectInputDialog;
    SubjectChangeDialog* subjectChangeDialog;
    Ui::SubjectsDialog *ui;
};

#endif // SUBJECTSDIALOG_H
