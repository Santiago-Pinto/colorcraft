/********************************************************************************
** Form generated from reading UI file 'newProfessordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROFESSORDIALOG_H
#define UI_NEWPROFESSORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newProfessorDialog
{
public:
    QLabel *lblAvailability;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAvailability;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAccept;
    QPushButton *btnExit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *lblName;
    QTextEdit *txtName;
    QComboBox *cmbSubject;

    void setupUi(QDialog *newProfessorDialog)
    {
        if (newProfessorDialog->objectName().isEmpty())
            newProfessorDialog->setObjectName(QStringLiteral("newProfessorDialog"));
        newProfessorDialog->resize(339, 347);
        lblAvailability = new QLabel(newProfessorDialog);
        lblAvailability->setObjectName(QStringLiteral("lblAvailability"));
        lblAvailability->setGeometry(QRect(120, 90, 111, 17));
        layoutWidget = new QWidget(newProfessorDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(27, 110, 281, 227));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAvailability = new QTableWidget(layoutWidget);
        grdAvailability->setObjectName(QStringLiteral("grdAvailability"));
        grdAvailability->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(grdAvailability);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnAccept = new QPushButton(layoutWidget);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));

        horizontalLayout_2->addWidget(btnAccept);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(newProfessorDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 324, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblName = new QLabel(layoutWidget1);
        lblName->setObjectName(QStringLiteral("lblName"));

        horizontalLayout->addWidget(lblName);

        txtName = new QTextEdit(layoutWidget1);
        txtName->setObjectName(QStringLiteral("txtName"));

        horizontalLayout->addWidget(txtName);

        cmbSubject = new QComboBox(newProfessorDialog);
        cmbSubject->setObjectName(QStringLiteral("cmbSubject"));
        cmbSubject->setGeometry(QRect(10, 50, 321, 25));

        retranslateUi(newProfessorDialog);

        QMetaObject::connectSlotsByName(newProfessorDialog);
    } // setupUi

    void retranslateUi(QDialog *newProfessorDialog)
    {
        newProfessorDialog->setWindowTitle(QApplication::translate("newProfessorDialog", "Dialog", Q_NULLPTR));
        lblAvailability->setText(QApplication::translate("newProfessorDialog", "Disponibilidad", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("newProfessorDialog", "Aceptar", Q_NULLPTR));
        btnExit->setText(QApplication::translate("newProfessorDialog", "Salir", Q_NULLPTR));
        lblName->setText(QApplication::translate("newProfessorDialog", "Nombre:", Q_NULLPTR));
        cmbSubject->clear();
        cmbSubject->insertItems(0, QStringList()
         << QApplication::translate("newProfessorDialog", "Materia", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class newProfessorDialog: public Ui_newProfessorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROFESSORDIALOG_H
