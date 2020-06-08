#ifndef SUBJECTCHANGEDIALOG_H
#define SUBJECTCHANGEDIALOG_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class SubjectChangeDialog;
}

class SubjectChangeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SubjectChangeDialog(UIHandler& Handler,
                                 QString& subject,
                                 QString& load,
                                 QWidget *parent = nullptr);
    ~SubjectChangeDialog();

private slots:
    void on_btnAccept_clicked();

    void on_btnExit_clicked();

private:
    Ui::SubjectChangeDialog *ui;
    UIHandler& uiHandler;
};

#endif // SUBJECTCHANGEDIALOG_H
