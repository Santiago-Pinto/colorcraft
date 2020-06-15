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
    QLabel *lblProfessor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *grdAvailability;
    QPushButton *btnExit;

    void setupUi(QDialog *AvailabilityCheckView)
    {
        if (AvailabilityCheckView->objectName().isEmpty())
            AvailabilityCheckView->setObjectName(QStringLiteral("AvailabilityCheckView"));
        AvailabilityCheckView->resize(293, 274);
        lblProfessor = new QLabel(AvailabilityCheckView);
        lblProfessor->setObjectName(QStringLiteral("lblProfessor"));
        lblProfessor->setGeometry(QRect(110, 20, 181, 17));
        QFont font;
        font.setPointSize(13);
        lblProfessor->setFont(font);
        lblProfessor->setTextFormat(Qt::PlainText);
        layoutWidget = new QWidget(AvailabilityCheckView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 258, 225));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grdAvailability = new QTableWidget(layoutWidget);
        grdAvailability->setObjectName(QStringLiteral("grdAvailability"));

        verticalLayout->addWidget(grdAvailability);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setStyleSheet(QLatin1String("background-color: rgb(250, 78, 78);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 14px;\n"
"color: white;\n"
"min-width: 10em;\n"
"padding: 6px;"));

        verticalLayout->addWidget(btnExit);


        retranslateUi(AvailabilityCheckView);

        QMetaObject::connectSlotsByName(AvailabilityCheckView);
    } // setupUi

    void retranslateUi(QDialog *AvailabilityCheckView)
    {
        AvailabilityCheckView->setWindowTitle(QApplication::translate("AvailabilityCheckView", "Dialog", Q_NULLPTR));
        lblProfessor->setText(QApplication::translate("AvailabilityCheckView", "Profesor", Q_NULLPTR));
        btnExit->setText(QApplication::translate("AvailabilityCheckView", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AvailabilityCheckView: public Ui_AvailabilityCheckView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVAILABILITYCHECKVIEW_H
