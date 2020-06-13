#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include "parser.h"
#include "builder.h"
#include "dbHandler.h"
#include "painter.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    setWindowTitle("Colorcraft");
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_subjectsBtn_clicked() {
    this->subjectsDialog = new SubjectsDialog(this->uiHandler, this);
    this->subjectsDialog->show();
}


void MainWindow::on_coloringBtn_clicked() {
    this->coloringDialog = new ColoringDialog(this->uiHandler, this);
    this->coloringDialog->show();
}

void MainWindow::on_exitBtn_clicked() {
    close();
}

void MainWindow::on_professorsBtn_clicked() {
  this->professorsDialog = new ProfessorsDialog(this->uiHandler, this);
  this->professorsDialog->show();
}

void MainWindow::on_assignmentsBtn_clicked() {
  this->assignmentsDialog = new AssignmentsDialog(this->uiHandler, this);
  this->assignmentsDialog->show();
}
