/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QLineEdit *lineEdit_amp;
    QLineEdit *lineEdit_freq;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Apply_run;
    QPushButton *Apply_stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(544, 444);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 10, 381, 281));
        lineEdit_amp = new QLineEdit(centralwidget);
        lineEdit_amp->setObjectName("lineEdit_amp");
        lineEdit_amp->setGeometry(QRect(420, 50, 113, 24));
        lineEdit_freq = new QLineEdit(centralwidget);
        lineEdit_freq->setObjectName("lineEdit_freq");
        lineEdit_freq->setGeometry(QRect(420, 140, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 110, 81, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 20, 71, 21));
        label_2->setFont(font);
        Apply_run = new QPushButton(centralwidget);
        Apply_run->setObjectName("Apply_run");
        Apply_run->setGeometry(QRect(30, 310, 111, 24));
        Apply_stop = new QPushButton(centralwidget);
        Apply_stop->setObjectName("Apply_stop");
        Apply_stop->setGeometry(QRect(170, 310, 111, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 544, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Amplitude", nullptr));
        Apply_run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        Apply_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
