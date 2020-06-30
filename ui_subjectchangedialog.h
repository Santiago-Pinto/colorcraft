/********************************************************************************
** Form generated from reading UI file 'subjectchangedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTCHANGEDIALOG_H
#define UI_SUBJECTCHANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectChangeDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *lblSelected;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *lblLoad;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QTextEdit *txtLoad;
    QPushButton *btnAccept;
    QPushButton *btnExit;

    void setupUi(QDialog *SubjectChangeDialog)
    {
        if (SubjectChangeDialog->objectName().isEmpty())
            SubjectChangeDialog->setObjectName(QStringLiteral("SubjectChangeDialog"));
        SubjectChangeDialog->setEnabled(true);
        SubjectChangeDialog->resize(403, 137);
        layoutWidget = new QWidget(SubjectChangeDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 10, 220, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: bold 14px;"));

        horizontalLayout_4->addWidget(label_4);

        lblSelected = new QLabel(layoutWidget);
        lblSelected->setObjectName(QStringLiteral("lblSelected"));
        lblSelected->setStyleSheet(QStringLiteral("font: bold 14px;"));

        horizontalLayout_4->addWidget(lblSelected);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: bold 14px;"));

        horizontalLayout_5->addWidget(label_5);

        lblLoad = new QLabel(layoutWidget);
        lblLoad->setObjectName(QStringLiteral("lblLoad"));
        lblLoad->setStyleSheet(QStringLiteral("font: bold 14px;"));

        horizontalLayout_5->addWidget(lblLoad);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font: bold 13px;"));

        horizontalLayout_6->addWidget(label_6);

        txtLoad = new QTextEdit(layoutWidget);
        txtLoad->setObjectName(QStringLiteral("txtLoad"));

        horizontalLayout_6->addWidget(txtLoad);


        verticalLayout_2->addLayout(horizontalLayout_6);

        btnAccept = new QPushButton(SubjectChangeDialog);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(10, 100, 176, 31));
        btnAccept->setStyleSheet(QLatin1String("QPushButton {\n"
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
        btnExit = new QPushButton(SubjectChangeDialog);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setEnabled(true);
        btnExit->setGeometry(QRect(210, 100, 176, 31));
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

        retranslateUi(SubjectChangeDialog);

        QMetaObject::connectSlotsByName(SubjectChangeDialog);
    } // setupUi

    void retranslateUi(QDialog *SubjectChangeDialog)
    {
        SubjectChangeDialog->setWindowTitle(QApplication::translate("SubjectChangeDialog", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("SubjectChangeDialog", "Materia:", Q_NULLPTR));
        lblSelected->setText(QApplication::translate("SubjectChangeDialog", "Seleccionada", Q_NULLPTR));
        label_5->setText(QApplication::translate("SubjectChangeDialog", "Carga horaria actual:", Q_NULLPTR));
        lblLoad->setText(QApplication::translate("SubjectChangeDialog", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("SubjectChangeDialog", "Nueva carga:", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("SubjectChangeDialog", "Aceptar", Q_NULLPTR));
        btnExit->setText(QApplication::translate("SubjectChangeDialog", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectChangeDialog: public Ui_SubjectChangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTCHANGEDIALOG_H
