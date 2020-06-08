#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "coloringdialog.h"
#include "subjectsdialog.h"
#include "professorsDialog.h"
#include "uiHandler.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_coloringBtn_clicked();
    void on_subjectsBtn_clicked();
    void on_exitBtn_clicked();
    void on_professorsBtn_clicked();

private:
    Ui::MainWindow *ui;
    ColoringDialog* coloringDialog;
    SubjectsDialog* subjectsDialog;
    ProfessorsDialog* professorsDialog;
    UIHandler uiHandler;
};

#endif // MAINWINDOW_H
