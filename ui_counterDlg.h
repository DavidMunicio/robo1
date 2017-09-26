/********************************************************************************
** Form generated from reading UI file 'counterDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERDLG_H
#define UI_COUNTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QPushButton *button;
    QLCDNumber *lcdNumber;
    QLabel *lblContador;
    QLCDNumber *lcdThread;
    QLabel *lblThread;
    QPushButton *btnThreads;

    void setupUi(QWidget *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        button = new QPushButton(Counter);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(20, 180, 251, 71));
        button->setAutoDefault(false);
        lcdNumber = new QLCDNumber(Counter);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(170, 40, 181, 91));
        QFont font;
        font.setPointSize(20);
        lcdNumber->setFont(font);
        lblContador = new QLabel(Counter);
        lblContador->setObjectName(QString::fromUtf8("lblContador"));
        lblContador->setGeometry(QRect(230, 20, 67, 17));
        lcdThread = new QLCDNumber(Counter);
        lcdThread->setObjectName(QString::fromUtf8("lcdThread"));
        lcdThread->setGeometry(QRect(30, 40, 91, 91));
        lcdThread->setFont(font);
        lblThread = new QLabel(Counter);
        lblThread->setObjectName(QString::fromUtf8("lblThread"));
        lblThread->setGeometry(QRect(61, 20, 30, 17));
        btnThreads = new QPushButton(Counter);
        btnThreads->setObjectName(QString::fromUtf8("btnThreads"));
        btnThreads->setGeometry(QRect(280, 180, 91, 71));

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QWidget *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0, QApplication::UnicodeUTF8));
        button->setText(QApplication::translate("Counter", "STOP", 0, QApplication::UnicodeUTF8));
        lblContador->setText(QApplication::translate("Counter", "contador", 0, QApplication::UnicodeUTF8));
        lblThread->setText(QApplication::translate("Counter", "hilo", 0, QApplication::UnicodeUTF8));
        btnThreads->setText(QApplication::translate("Counter", "hilos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERDLG_H
