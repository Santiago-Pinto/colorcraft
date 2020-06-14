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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *professorsBtn;
    QPushButton *assignmentsBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *coloringBtn;
    QPushButton *subjectsBtn;
    QPushButton *exitBtn;
    QLabel *label;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(576, 404);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 230, 391, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        professorsBtn = new QPushButton(layoutWidget);
        professorsBtn->setObjectName(QStringLiteral("professorsBtn"));

        horizontalLayout->addWidget(professorsBtn);

        assignmentsBtn = new QPushButton(layoutWidget);
        assignmentsBtn->setObjectName(QStringLiteral("assignmentsBtn"));

        horizontalLayout->addWidget(assignmentsBtn);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 270, 391, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        coloringBtn = new QPushButton(layoutWidget1);
        coloringBtn->setObjectName(QStringLiteral("coloringBtn"));

        horizontalLayout_2->addWidget(coloringBtn);

        subjectsBtn = new QPushButton(layoutWidget1);
        subjectsBtn->setObjectName(QStringLiteral("subjectsBtn"));

        horizontalLayout_2->addWidget(subjectsBtn);

        exitBtn = new QPushButton(layoutWidget1);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_2->addWidget(exitBtn);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 90, 361, 111));
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("title.png")));
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
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
