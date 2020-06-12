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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewAssignmentDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbCourse;
    QComboBox *cmbSubject;
    QComboBox *cmbProfessor;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAssign;
    QPushButton *btnExit;

    void setupUi(QDialog *NewAssignmentDialog)
    {
        if (NewAssignmentDialog->objectName().isEmpty())
            NewAssignmentDialog->setObjectName(QStringLiteral("NewAssignmentDialog"));
        NewAssignmentDialog->resize(290, 78);
        layoutWidget = new QWidget(NewAssignmentDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 271, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmbCourse = new QComboBox(layoutWidget);
        cmbCourse->setObjectName(QStringLiteral("cmbCourse"));

        horizontalLayout->addWidget(cmbCourse);

        cmbSubject = new QComboBox(layoutWidget);
        cmbSubject->setObjectName(QStringLiteral("cmbSubject"));

        horizontalLayout->addWidget(cmbSubject);

        cmbProfessor = new QComboBox(layoutWidget);
        cmbProfessor->setObjectName(QStringLiteral("cmbProfessor"));

        horizontalLayout->addWidget(cmbProfessor);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnAssign = new QPushButton(layoutWidget);
        btnAssign->setObjectName(QStringLiteral("btnAssign"));

        horizontalLayout_2->addWidget(btnAssign);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NewAssignmentDialog);

        QMetaObject::connectSlotsByName(NewAssignmentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAssignmentDialog)
    {
        NewAssignmentDialog->setWindowTitle(QApplication::translate("NewAssignmentDialog", "Dialog", Q_NULLPTR));
        cmbCourse->clear();
        cmbCourse->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Curso", Q_NULLPTR)
        );
        cmbSubject->clear();
        cmbSubject->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Materia", Q_NULLPTR)
        );
        cmbProfessor->clear();
        cmbProfessor->insertItems(0, QStringList()
         << QApplication::translate("NewAssignmentDialog", "Profesor", Q_NULLPTR)
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
