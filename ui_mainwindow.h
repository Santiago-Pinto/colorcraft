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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *professorsBtn;
    QPushButton *assignmentsBtn;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *coloringBtn;
    QPushButton *subjectsBtn;
    QPushButton *exitBtn;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(576, 404);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 250, 188, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        professorsBtn = new QPushButton(widget);
        professorsBtn->setObjectName(QStringLiteral("professorsBtn"));

        horizontalLayout->addWidget(professorsBtn);

        assignmentsBtn = new QPushButton(widget);
        assignmentsBtn->setObjectName(QStringLiteral("assignmentsBtn"));

        horizontalLayout->addWidget(assignmentsBtn);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(80, 290, 289, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        coloringBtn = new QPushButton(widget1);
        coloringBtn->setObjectName(QStringLiteral("coloringBtn"));

        horizontalLayout_2->addWidget(coloringBtn);

        subjectsBtn = new QPushButton(widget1);
        subjectsBtn->setObjectName(QStringLiteral("subjectsBtn"));

        horizontalLayout_2->addWidget(subjectsBtn);

        exitBtn = new QPushButton(widget1);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_2->addWidget(exitBtn);

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
        professorsBtn->setText(QApplication::translate("MainWindow", "Profesores", Q_NULLPTR));
        assignmentsBtn->setText(QApplication::translate("MainWindow", "Asignaciones", Q_NULLPTR));
        coloringBtn->setText(QApplication::translate("MainWindow", "Armar Horario", Q_NULLPTR));
        subjectsBtn->setText(QApplication::translate("MainWindow", "Asignaturas", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
