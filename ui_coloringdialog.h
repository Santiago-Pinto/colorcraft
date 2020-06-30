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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColoringDialog
{
public:
    QWidget *centralWidget;
    QPushButton *colorBtn;
    QPushButton *exitBtn;
    QTableWidget *scheduleGrd;
    QComboBox *coursesCmbBox;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *ColoringDialog)
    {
        if (ColoringDialog->objectName().isEmpty())
            ColoringDialog->setObjectName(QStringLiteral("ColoringDialog"));
        ColoringDialog->resize(576, 404);
        centralWidget = new QWidget(ColoringDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 581, 385));
        colorBtn = new QPushButton(centralWidget);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));
        colorBtn->setGeometry(QRect(120, 330, 176, 31));
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
"}"));
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 330, 176, 31));
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
        coursesCmbBox->setGeometry(QRect(380, 260, 111, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 260, 191, 20));
        label->setStyleSheet(QStringLiteral("font: bold 14px;"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 260, 51, 21));

        retranslateUi(ColoringDialog);

        QMetaObject::connectSlotsByName(ColoringDialog);
    } // setupUi

    void retranslateUi(QDialog *ColoringDialog)
    {
        ColoringDialog->setWindowTitle(QApplication::translate("ColoringDialog", "MainWindow", Q_NULLPTR));
        colorBtn->setText(QApplication::translate("ColoringDialog", "Colorear", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("ColoringDialog", "Salir", Q_NULLPTR));
        coursesCmbBox->clear();
        coursesCmbBox->insertItems(0, QStringList()
         << QApplication::translate("ColoringDialog", "Cursos", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ColoringDialog", "Carga horaria semanal:", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("ColoringDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColoringDialog: public Ui_ColoringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORINGDIALOG_H
