/********************************************************************************
** Form generated from reading UI file 'availabilitycheckview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVAILABILITYCHECKVIEW_H
#define UI_AVAILABILITYCHECKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AvailabilityCheckView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAvailability;
    QPushButton *btnExit;
    QLabel *lblProfessor;

    void setupUi(QDialog *AvailabilityCheckView)
    {
        if (AvailabilityCheckView->objectName().isEmpty())
            AvailabilityCheckView->setObjectName(QStringLiteral("AvailabilityCheckView"));
        AvailabilityCheckView->resize(278, 274);
        layoutWidget = new QWidget(AvailabilityCheckView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 258, 225));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAvailability = new QTableWidget(layoutWidget);
        grdAvailability->setObjectName(QStringLiteral("grdAvailability"));
        grdAvailability->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: rgb(11, 117, 250);\n"
"    height: 32px;\n"
"	border-bottom-style: dotted;\n"
"}"));

        verticalLayout->addWidget(grdAvailability);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
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

        verticalLayout->addWidget(btnExit);

        lblProfessor = new QLabel(AvailabilityCheckView);
        lblProfessor->setObjectName(QStringLiteral("lblProfessor"));
        lblProfessor->setGeometry(QRect(90, 20, 181, 17));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lblProfessor->setFont(font);
        lblProfessor->setStyleSheet(QStringLiteral("font: bold 18px;"));
        lblProfessor->setTextFormat(Qt::PlainText);

        retranslateUi(AvailabilityCheckView);

        QMetaObject::connectSlotsByName(AvailabilityCheckView);
    } // setupUi

    void retranslateUi(QDialog *AvailabilityCheckView)
    {
        AvailabilityCheckView->setWindowTitle(QApplication::translate("AvailabilityCheckView", "Dialog", Q_NULLPTR));
        btnExit->setText(QApplication::translate("AvailabilityCheckView", "Salir", Q_NULLPTR));
        lblProfessor->setText(QApplication::translate("AvailabilityCheckView", "Profesor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AvailabilityCheckView: public Ui_AvailabilityCheckView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVAILABILITYCHECKVIEW_H
