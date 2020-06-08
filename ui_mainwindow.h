/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *coloringBtn;
    QPushButton *subjectsBtn;
    QPushButton *exitBtn;
    QPushButton *professorsBtn;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(576, 404);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        coloringBtn = new QPushButton(centralWidget);
        coloringBtn->setObjectName(QStringLiteral("coloringBtn"));
        coloringBtn->setGeometry(QRect(80, 290, 121, 31));
        subjectsBtn = new QPushButton(centralWidget);
        subjectsBtn->setObjectName(QStringLiteral("subjectsBtn"));
        subjectsBtn->setGeometry(QRect(220, 290, 121, 31));
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(360, 290, 121, 31));
        professorsBtn = new QPushButton(centralWidget);
        professorsBtn->setObjectName(QStringLiteral("professorsBtn"));
        professorsBtn->setGeometry(QRect(80, 250, 121, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 576, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        coloringBtn->setText(QApplication::translate("MainWindow", "Armar Horario", Q_NULLPTR));
        subjectsBtn->setText(QApplication::translate("MainWindow", "Asignaturas", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "Salir", Q_NULLPTR));
        professorsBtn->setText(QApplication::translate("MainWindow", "Profesores", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
