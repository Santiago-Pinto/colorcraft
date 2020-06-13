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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewAssignmentDialog
{
public:
    QComboBox *cmbProfessor;
    QPushButton *btnAssign;
    QPushButton *btnExit;
    QComboBox *cmbSubject;
    QComboBox *cmbCourse;

    void setupUi(QDialog *NewAssignmentDialog)
    {
        if (NewAssignmentDialog->objectName().isEmpty())
            NewAssignmentDialog->setObjectName(QStringLiteral("NewAssignmentDialog"));
        NewAssignmentDialog->resize(431, 105);
        cmbProfessor = new QComboBox(NewAssignmentDialog);
        cmbProfessor->setObjectName(QStringLiteral("cmbProfessor"));
        cmbProfessor->setGeometry(QRect(240, 20, 181, 25));
        btnAssign = new QPushButton(NewAssignmentDialog);
        btnAssign->setObjectName(QStringLiteral("btnAssign"));
        btnAssign->setGeometry(QRect(30, 60, 171, 25));
        btnExit = new QPushButton(NewAssignmentDialog);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(210, 60, 171, 25));
        cmbSubject = new QComboBox(NewAssignmentDialog);
        cmbSubject->setObjectName(QStringLiteral("cmbSubject"));
        cmbSubject->setGeometry(QRect(100, 20, 131, 25));
        cmbSubject->setFrame(true);
        cmbCourse = new QComboBox(NewAssignmentDialog);
        cmbCourse->setObjectName(QStringLiteral("cmbCourse"));
        cmbCourse->setGeometry(QRect(10, 20, 81, 25));

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
        btnAssign->setText(QApplication::translate("NewAssignmentDialog", "Asignar", Q_NULLPTR));
        btnExit->setText(QApplication::translate("NewAssignmentDialog", "Salir", Q_NULLPTR));
        cmbSubject->clear();
        cmbSubject->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Materia", Q_NULLPTR)
        );
        cmbCourse->clear();
        cmbCourse->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Curso", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class NewAssignmentDialog: public Ui_NewAssignmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWASSIGNMENTDIALOG_H
