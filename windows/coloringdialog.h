#ifndef COLORINGDIALOG_H
#define COLORINGDIALOG_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class ColoringDialog;
}

class ColoringDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ColoringDialog(UIHandler& handler, QWidget *parent = nullptr);
    ~ColoringDialog();

private slots:
    void on_colorBtn_clicked();
    void on_exitBtn_clicked();
    void on_coursesCmbBox_currentTextChanged(const QString &arg1);


private:
    Ui::ColoringDialog *ui;
    UIHandler& uiHandler;
};

#endif // COLORINGDIALOG_H
