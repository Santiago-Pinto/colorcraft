/********************************************************************************
** Form generated from reading UI file 'subjectinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTINPUTDIALOG_H
#define UI_SUBJECTINPUTDIALOG_H

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

class Ui_SubjectInputDialog
{
public:
    QPushButton *txtAccept;
    QPushButton *btnAccept;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *txtName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *txtLoad;

    void setupUi(QDialog *SubjectInputDialog)
    {
        if (SubjectInputDialog->objectName().isEmpty())
            SubjectInputDialog->setObjectName(QStringLiteral("SubjectInputDialog"));
        SubjectInputDialog->resize(248, 124);
        txtAccept = new QPushButton(SubjectInputDialog);
        txtAccept->setObjectName(QStringLiteral("txtAccept"));
        txtAccept->setGeometry(QRect(10, 200, 379, 25));
        btnAccept = new QPushButton(SubjectInputDialog);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(30, 90, 176, 31));
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
        layoutWidget = new QWidget(SubjectInputDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 241, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: bold 13px;"));

        horizontalLayout->addWidget(label);

        txtName = new QTextEdit(layoutWidget);
        txtName->setObjectName(QStringLiteral("txtName"));

        horizontalLayout->addWidget(txtName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: bold 13px;"));

        horizontalLayout_2->addWidget(label_2);

        txtLoad = new QTextEdit(layoutWidget);
        txtLoad->setObjectName(QStringLiteral("txtLoad"));

        horizontalLayout_2->addWidget(txtLoad);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SubjectInputDialog);

        QMetaObject::connectSlotsByName(SubjectInputDialog);
    } // setupUi

    void retranslateUi(QDialog *SubjectInputDialog)
    {
        SubjectInputDialog->setWindowTitle(QApplication::translate("SubjectInputDialog", "Dialog", Q_NULLPTR));
        txtAccept->setText(QApplication::translate("SubjectInputDialog", "Aceptar", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("SubjectInputDialog", "Aceptar", Q_NULLPTR));
        label->setText(QApplication::translate("SubjectInputDialog", "Nombre de la Materia:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SubjectInputDialog", "Carga horaria semanal:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectInputDialog: public Ui_SubjectInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTINPUTDIALOG_H
