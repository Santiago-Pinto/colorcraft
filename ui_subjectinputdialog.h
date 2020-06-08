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
    QWidget *widget;
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
        SubjectInputDialog->resize(244, 119);
        txtAccept = new QPushButton(SubjectInputDialog);
        txtAccept->setObjectName(QStringLiteral("txtAccept"));
        txtAccept->setGeometry(QRect(10, 200, 379, 25));
        btnAccept = new QPushButton(SubjectInputDialog);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setGeometry(QRect(70, 90, 121, 25));
        widget = new QWidget(SubjectInputDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 241, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txtName = new QTextEdit(widget);
        txtName->setObjectName(QStringLiteral("txtName"));

        horizontalLayout->addWidget(txtName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txtLoad = new QTextEdit(widget);
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
