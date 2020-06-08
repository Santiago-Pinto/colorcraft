/********************************************************************************
** Form generated from reading UI file 'professorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORSDIALOG_H
#define UI_PROFESSORSDIALOG_H

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

class Ui_ProfessorsDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdProfessors;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConsult;
    QPushButton *btnModify;
    QPushButton *btnRemove;

    void setupUi(QDialog *ProfessorsDialog)
    {
        if (ProfessorsDialog->objectName().isEmpty())
            ProfessorsDialog->setObjectName(QStringLiteral("ProfessorsDialog"));
        ProfessorsDialog->resize(387, 229);
        widget = new QWidget(ProfessorsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 385, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdProfessors = new QTableWidget(widget);
        grdProfessors->setObjectName(QStringLiteral("grdProfessors"));
        grdProfessors->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(grdProfessors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConsult = new QPushButton(widget);
        btnConsult->setObjectName(QStringLiteral("btnConsult"));

        horizontalLayout->addWidget(btnConsult);

        btnModify = new QPushButton(widget);
        btnModify->setObjectName(QStringLiteral("btnModify"));

        horizontalLayout->addWidget(btnModify);

        btnRemove = new QPushButton(widget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ProfessorsDialog);

        QMetaObject::connectSlotsByName(ProfessorsDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfessorsDialog)
    {
        ProfessorsDialog->setWindowTitle(QApplication::translate("ProfessorsDialog", "Dialog", Q_NULLPTR));
        btnConsult->setText(QApplication::translate("ProfessorsDialog", "Consultar disponibilidad", Q_NULLPTR));
        btnModify->setText(QApplication::translate("ProfessorsDialog", "Modificar Datos", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("ProfessorsDialog", "Remover", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProfessorsDialog: public Ui_ProfessorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORSDIALOG_H
