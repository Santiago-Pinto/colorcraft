/********************************************************************************
** Form generated from reading UI file 'coloringdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORINGDIALOG_H
#define UI_COLORINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColoringDialog
{
public:
    QWidget *centralWidget;
    QTableWidget *scheduleGrd;
    QComboBox *coursesCmbBox;
    QLabel *lblLoad;
    QLabel *lblProcessing;
    QPlainTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *colorBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *ColoringDialog)
    {
        if (ColoringDialog->objectName().isEmpty())
            ColoringDialog->setObjectName(QStringLiteral("ColoringDialog"));
        ColoringDialog->resize(576, 404);
        centralWidget = new QWidget(ColoringDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 581, 385));
        scheduleGrd = new QTableWidget(centralWidget);
        scheduleGrd->setObjectName(QStringLiteral("scheduleGrd"));
        scheduleGrd->setGeometry(QRect(10, 30, 561, 192));
        scheduleGrd->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: rgb(11, 117, 250);\n"
"    height: 32px;\n"
"	border-bottom-style: dotted;\n"
"}"));
        coursesCmbBox = new QComboBox(centralWidget);
        coursesCmbBox->setObjectName(QStringLiteral("coursesCmbBox"));
        coursesCmbBox->setEnabled(false);
        coursesCmbBox->setGeometry(QRect(350, 250, 111, 25));
        lblLoad = new QLabel(centralWidget);
        lblLoad->setObjectName(QStringLiteral("lblLoad"));
        lblLoad->setGeometry(QRect(10, 250, 241, 31));
        lblLoad->setStyleSheet(QStringLiteral("font: bold 14px;"));
        lblProcessing = new QLabel(centralWidget);
        lblProcessing->setObjectName(QStringLiteral("lblProcessing"));
        lblProcessing->setGeometry(QRect(220, 290, 91, 51));
        textEdit = new QPlainTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 250, 31, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 340, 381, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        colorBtn = new QPushButton(layoutWidget);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));
        colorBtn->setStyleSheet(QLatin1String("QPushButton {\n"
"      background-color: rgb(230, 19, 249);\n"
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
"QPushButton:hover:!pressed\n"
"{\n"
"      background-color: rgb(189, 0, 174);\n"
"	  border-style: outset;\n"
"	  border-width: 2px;\n"
"	  border-radius: 15px;\n"
"	  border-color: beige;\n"
"	  font: bold 14px;\n"
"	  color: white;\n"
"	  min-width: 10em;\n"
"	  padding: 6px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(136, 138, 133);\n"
"}"));

        horizontalLayout->addWidget(colorBtn);

        exitBtn = new QPushButton(layoutWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(exitBtn);


        retranslateUi(ColoringDialog);

        QMetaObject::connectSlotsByName(ColoringDialog);
    } // setupUi

    void retranslateUi(QDialog *ColoringDialog)
    {
        ColoringDialog->setWindowTitle(QApplication::translate("ColoringDialog", "MainWindow", Q_NULLPTR));
        coursesCmbBox->clear();
        coursesCmbBox->insertItems(0, QStringList()
         << QApplication::translate("ColoringDialog", "Cursos", Q_NULLPTR)
        );
        lblLoad->setText(QApplication::translate("ColoringDialog", "Cantidad de bloques diarios:", Q_NULLPTR));
        lblProcessing->setText(QString());
        colorBtn->setText(QApplication::translate("ColoringDialog", "Colorear", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("ColoringDialog", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColoringDialog: public Ui_ColoringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORINGDIALOG_H
