/********************************************************************************
** Form generated from reading UI file 'subjectsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSDIALOG_H
#define UI_SUBJECTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectsDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *grdSubjects;
    QPushButton *newBtn;
    QPushButton *changesBtn;
    QPushButton *removeBtn;

    void setupUi(QDialog *SubjectsDialog)
    {
        if (SubjectsDialog->objectName().isEmpty())
            SubjectsDialog->setObjectName(QStringLiteral("SubjectsDialog"));
        SubjectsDialog->setEnabled(true);
        SubjectsDialog->resize(297, 330);
        layoutWidget = new QWidget(SubjectsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 291, 318));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        grdSubjects = new QTableWidget(layoutWidget);
        grdSubjects->setObjectName(QStringLiteral("grdSubjects"));
        grdSubjects->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(grdSubjects);

        newBtn = new QPushButton(layoutWidget);
        newBtn->setObjectName(QStringLiteral("newBtn"));

        verticalLayout_2->addWidget(newBtn);

        changesBtn = new QPushButton(layoutWidget);
        changesBtn->setObjectName(QStringLiteral("changesBtn"));

        verticalLayout_2->addWidget(changesBtn);

        removeBtn = new QPushButton(layoutWidget);
        removeBtn->setObjectName(QStringLiteral("removeBtn"));

        verticalLayout_2->addWidget(removeBtn);


        retranslateUi(SubjectsDialog);

        QMetaObject::connectSlotsByName(SubjectsDialog);
    } // setupUi

    void retranslateUi(QDialog *SubjectsDialog)
    {
        SubjectsDialog->setWindowTitle(QApplication::translate("SubjectsDialog", "Dialog", Q_NULLPTR));
        newBtn->setText(QApplication::translate("SubjectsDialog", "Nueva Asignatura", Q_NULLPTR));
        changesBtn->setText(QApplication::translate("SubjectsDialog", "Modificar Carga Horaria", Q_NULLPTR));
        removeBtn->setText(QApplication::translate("SubjectsDialog", "Quitar Asignatura", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectsDialog: public Ui_SubjectsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSDIALOG_H
