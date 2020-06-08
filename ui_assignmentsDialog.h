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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAssignments;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNew;
    QPushButton *btnDelete;

    void setupUi(QDialog *AssignmentsDialog)
    {
        if (AssignmentsDialog->objectName().isEmpty())
            AssignmentsDialog->setObjectName(QStringLiteral("AssignmentsDialog"));
        AssignmentsDialog->resize(280, 251);
        widget = new QWidget(AssignmentsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 258, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAssignments = new QTableWidget(widget);
        grdAssignments->setObjectName(QStringLiteral("grdAssignments"));
        grdAssignments->setSelectionMode(QAbstractItemView::SingleSelection);
        grdAssignments->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(grdAssignments);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnNew = new QPushButton(widget);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnDelete = new QPushButton(widget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

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
