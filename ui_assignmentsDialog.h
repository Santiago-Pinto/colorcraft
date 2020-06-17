/********************************************************************************
** Form generated from reading UI file 'assignmentsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENTSDIALOG_H
#define UI_ASSIGNMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssignmentsDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAssignments;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNew;
    QPushButton *btnDelete;

    void setupUi(QDialog *AssignmentsDialog)
    {
        if (AssignmentsDialog->objectName().isEmpty())
            AssignmentsDialog->setObjectName(QStringLiteral("AssignmentsDialog"));
        AssignmentsDialog->resize(402, 251);
        layoutWidget = new QWidget(AssignmentsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 227));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAssignments = new QTableWidget(layoutWidget);
        grdAssignments->setObjectName(QStringLiteral("grdAssignments"));
        grdAssignments->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: rgb(11, 117, 250);\n"
"    height: 32px;\n"
"	border-bottom-style: dotted;\n"
"}"));
        grdAssignments->setSelectionMode(QAbstractItemView::SingleSelection);
        grdAssignments->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(grdAssignments);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnNew = new QPushButton(layoutWidget);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(btnNew);

        btnDelete = new QPushButton(layoutWidget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(btnDelete);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AssignmentsDialog);

        QMetaObject::connectSlotsByName(AssignmentsDialog);
    } // setupUi

    void retranslateUi(QDialog *AssignmentsDialog)
    {
        AssignmentsDialog->setWindowTitle(QApplication::translate("AssignmentsDialog", "Dialog", Q_NULLPTR));
        btnNew->setText(QApplication::translate("AssignmentsDialog", "Nueva asignacion", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("AssignmentsDialog", "Eliminar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AssignmentsDialog: public Ui_AssignmentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENTSDIALOG_H
