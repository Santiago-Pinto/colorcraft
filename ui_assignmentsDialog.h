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
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AssignmentsDialog
{
public:

    void setupUi(QDialog *AssignmentsDialog)
    {
        if (AssignmentsDialog->objectName().isEmpty())
            AssignmentsDialog->setObjectName(QStringLiteral("AssignmentsDialog"));
        AssignmentsDialog->resize(400, 300);

        retranslateUi(AssignmentsDialog);

        QMetaObject::connectSlotsByName(AssignmentsDialog);
    } // setupUi

    void retranslateUi(QDialog *AssignmentsDialog)
    {
        AssignmentsDialog->setWindowTitle(QApplication::translate("AssignmentsDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AssignmentsDialog: public Ui_AssignmentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENTSDIALOG_H
