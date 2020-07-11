/********************************************************************************
** Form generated from reading UI file 'professorChangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORCHANGEDIALOG_H
#define UI_PROFESSORCHANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_ProfessorChangeDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAvailability;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnUpdate;
    QPushButton *btnExit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *lblName;
    QTextEdit *txtName;

    void setupUi(QDialog *ProfessorChangeDialog)
    {
        if (ProfessorChangeDialog->objectName().isEmpty())
            ProfessorChangeDialog->setObjectName(QStringLiteral("ProfessorChangeDialog"));
        ProfessorChangeDialog->resize(393, 324);
        layoutWidget = new QWidget(ProfessorChangeDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 391, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAvailability = new QTableWidget(layoutWidget);
        grdAvailability->setObjectName(QStringLiteral("grdAvailability"));
        grdAvailability->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: rgb(11, 117, 250);\n"
"    height: 32px;\n"
"	border-bottom-style: dotted;\n"
"}"));

        verticalLayout->addWidget(grdAvailability);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnUpdate = new QPushButton(layoutWidget);
        btnUpdate->setObjectName(QStringLiteral("btnUpdate"));
        btnUpdate->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(11, 117, 250);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 15px;\n"
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
"	  border-radius: 15px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btnUpdate);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(250, 78, 78);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 15px;\n"
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
"	  border-radius: 15px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}"));

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(ProfessorChangeDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(3, 4, 324, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblName = new QLabel(layoutWidget1);
        lblName->setObjectName(QStringLiteral("lblName"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lblName->setFont(font);

        horizontalLayout->addWidget(lblName);

        txtName = new QTextEdit(layoutWidget1);
        txtName->setObjectName(QStringLiteral("txtName"));
        QFont font1;
        font1.setPointSize(12);
        txtName->setFont(font1);

        horizontalLayout->addWidget(txtName);


        retranslateUi(ProfessorChangeDialog);

        QMetaObject::connectSlotsByName(ProfessorChangeDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfessorChangeDialog)
    {
        ProfessorChangeDialog->setWindowTitle(QApplication::translate("ProfessorChangeDialog", "Dialog", Q_NULLPTR));
        btnUpdate->setText(QApplication::translate("ProfessorChangeDialog", "Actualizar", Q_NULLPTR));
        btnExit->setText(QApplication::translate("ProfessorChangeDialog", "Salir", Q_NULLPTR));
        lblName->setText(QApplication::translate("ProfessorChangeDialog", "Nombre:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProfessorChangeDialog: public Ui_ProfessorChangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORCHANGEDIALOG_H
