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
    QWidget *layoutWidget;
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
        ProfessorsDialog->resize(461, 279);
        layoutWidget = new QWidget(ProfessorsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 461, 270));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        grdProfessors = new QTableWidget(layoutWidget);
        grdProfessors->setObjectName(QStringLiteral("grdProfessors"));
        grdProfessors->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: rgb(11, 117, 250);\n"
"    height: 32px;\n"
"	border-bottom-style: dotted;\n"
"}"));
        grdProfessors->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(grdProfessors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnConsult = new QPushButton(layoutWidget);
        btnConsult->setObjectName(QStringLiteral("btnConsult"));
        btnConsult->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_3->addWidget(btnConsult);

        btnNew = new QPushButton(layoutWidget);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_3->addWidget(btnNew);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnModify = new QPushButton(layoutWidget);
        btnModify->setObjectName(QStringLiteral("btnModify"));
        btnModify->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_2->addWidget(btnModify);

        btnRemove = new QPushButton(layoutWidget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));
        btnRemove->setStyleSheet(QLatin1String("QPushButton {\n"
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
