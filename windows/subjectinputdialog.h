#ifndef SUBJECTINPUTDIALOG_H
#define SUBJECTINPUTDIALOG_H

#include <QDialog>
#include "uiHandler.h"


namespace Ui {
class SubjectInputDialog;
}

class SubjectInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubjectInputDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~SubjectInputDialog();

private slots:
    void on_btnAccept_clicked();

private:
    Ui::SubjectInputDialog *ui;
    UIHandler& uiHandler;
};

#endif // SUBJECTINPUTDIALOG_H
