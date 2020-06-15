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
    QWidget *layoutWidget_2;
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
        MainWindow->resize(641, 404);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 230, 391, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        professorsBtn = new QPushButton(layoutWidget);
        professorsBtn->setObjectName(QStringLiteral("professorsBtn"));
        professorsBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(11, 117, 250);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(3, 7, 128);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(professorsBtn);

        assignmentsBtn = new QPushButton(layoutWidget);
        assignmentsBtn->setObjectName(QStringLiteral("assignmentsBtn"));
        assignmentsBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(11, 117, 250);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(3, 7, 128);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}\n"
""));

        horizontalLayout->addWidget(assignmentsBtn);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 270, 581, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        coloringBtn = new QPushButton(layoutWidget_2);
        coloringBtn->setObjectName(QStringLiteral("coloringBtn"));
        coloringBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(56, 234, 41);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(78, 154, 6);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}"));

        horizontalLayout_2->addWidget(coloringBtn);

        subjectsBtn = new QPushButton(layoutWidget_2);
        subjectsBtn->setObjectName(QStringLiteral("subjectsBtn"));
        subjectsBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(11, 117, 250);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(3, 7, 128);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(subjectsBtn);

        exitBtn = new QPushButton(layoutWidget_2);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(250, 78, 78);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(204, 0, 0);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 10px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}"));

        horizontalLayout_2->addWidget(exitBtn);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 90, 361, 111));
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("title.png")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 641, 22));
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
