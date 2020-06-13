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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdProfessors;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnConsult;
    QPushButton *btnNew;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnModify;
    QPushButton *btnRemove;

    void setupUi(QDialog *ProfessorsDialog)
    {
        if (ProfessorsDialog->objectName().isEmpty())
            ProfessorsDialog->setObjectName(QStringLiteral("ProfessorsDialog"));
        ProfessorsDialog->resize(471, 279);
        widget = new QWidget(ProfessorsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 461, 270));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        grdProfessors = new QTableWidget(widget);
        grdProfessors->setObjectName(QStringLiteral("grdProfessors"));
        grdProfessors->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(grdProfessors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnConsult = new QPushButton(widget);
        btnConsult->setObjectName(QStringLiteral("btnConsult"));

        horizontalLayout_3->addWidget(btnConsult);

        btnNew = new QPushButton(widget);
        btnNew->setObjectName(QStringLiteral("btnNew"));

        horizontalLayout_3->addWidget(btnNew);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnModify = new QPushButton(widget);
        btnModify->setObjectName(QStringLiteral("btnModify"));

        horizontalLayout_2->addWidget(btnModify);

        btnRemove = new QPushButton(widget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout_2->addWidget(btnRemove);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(ProfessorsDialog);

        QMetaObject::connectSlotsByName(ProfessorsDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfessorsDialog)
    {
        ProfessorsDialog->setWindowTitle(QApplication::translate("ProfessorsDialog", "Dialog", Q_NULLPTR));
        btnConsult->setText(QApplication::translate("ProfessorsDialog", "Consultar disponibilidad", Q_NULLPTR));
        btnNew->setText(QApplication::translate("ProfessorsDialog", "Nuevo profesor", Q_NULLPTR));
        btnModify->setText(QApplication::translate("ProfessorsDialog", "Modificar Datos", Q_NULLPTR));
        btnRemove->setText(QApplication::translate("ProfessorsDialog", "Remover", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProfessorsDialog: public Ui_ProfessorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORSDIALOG_H
