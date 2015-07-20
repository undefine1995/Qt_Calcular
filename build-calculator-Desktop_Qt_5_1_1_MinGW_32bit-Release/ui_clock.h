/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;

    void setupUi(QMainWindow *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName(QStringLiteral("clock"));
        clock->resize(381, 112);
        centralWidget = new QWidget(clock);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 361, 91));
        lcdNumber->setDigitCount(8);
        clock->setCentralWidget(centralWidget);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QMainWindow *clock)
    {
        clock->setWindowTitle(QApplication::translate("clock", "clock", 0));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
