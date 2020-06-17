/********************************************************************************
** Form generated from reading UI file 'newassignmentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWASSIGNMENTDIALOG_H
#define UI_NEWASSIGNMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewAssignmentDialog
{
public:
    QComboBox *cmbProfessor;
    QComboBox *cmbSubject;
    QComboBox *cmbCourse;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAssign;
    QPushButton *btnExit;

    void setupUi(QDialog *NewAssignmentDialog)
    {
        if (NewAssignmentDialog->objectName().isEmpty())
            NewAssignmentDialog->setObjectName(QStringLiteral("NewAssignmentDialog"));
        NewAssignmentDialog->resize(440, 105);
        cmbProfessor = new QComboBox(NewAssignmentDialog);
        cmbProfessor->setObjectName(QStringLiteral("cmbProfessor"));
        cmbProfessor->setGeometry(QRect(240, 20, 181, 25));
        cmbSubject = new QComboBox(NewAssignmentDialog);
        cmbSubject->setObjectName(QStringLiteral("cmbSubject"));
        cmbSubject->setGeometry(QRect(100, 20, 131, 25));
        cmbSubject->setFrame(true);
        cmbCourse = new QComboBox(NewAssignmentDialog);
        cmbCourse->setObjectName(QStringLiteral("cmbCourse"));
        cmbCourse->setGeometry(QRect(10, 20, 81, 25));
        widget = new QWidget(NewAssignmentDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 60, 381, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAssign = new QPushButton(widget);
        btnAssign->setObjectName(QStringLiteral("btnAssign"));
        btnAssign->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(btnAssign);

        btnExit = new QPushButton(widget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(btnExit);


        retranslateUi(NewAssignmentDialog);

        QMetaObject::connectSlotsByName(NewAssignmentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAssignmentDialog)
    {
        NewAssignmentDialog->setWindowTitle(QApplication::translate("NewAssignmentDialog", "Dialog", Q_NULLPTR));
        cmbProfessor->clear();
        cmbProfessor->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Profesor", Q_NULLPTR)
        );
        cmbSubject->clear();
        cmbSubject->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Materia", Q_NULLPTR)
        );
        cmbCourse->clear();
        cmbCourse->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Curso", Q_NULLPTR)
        );
        btnAssign->setText(QApplication::translate("NewAssignmentDialog", "Asignar", Q_NULLPTR));
        btnExit->setText(QApplication::translate("NewAssignmentDialog", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewAssignmentDialog: public Ui_NewAssignmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWASSIGNMENTDIALOG_H
