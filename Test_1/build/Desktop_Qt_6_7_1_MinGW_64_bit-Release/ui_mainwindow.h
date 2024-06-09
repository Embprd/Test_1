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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QPushButton *Apply_run;
    QPushButton *Apply_stop;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_amp;
    QLineEdit *lineEdit_freq;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(544, 444);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Apply_run = new QPushButton(centralwidget);
        Apply_run->setObjectName("Apply_run");

        gridLayout->addWidget(Apply_run, 1, 0, 1, 1);

        Apply_stop = new QPushButton(centralwidget);
        Apply_stop->setObjectName("Apply_stop");

        gridLayout->addWidget(Apply_stop, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 3, 1, 1);

        lineEdit_amp = new QLineEdit(centralwidget);
        lineEdit_amp->setObjectName("lineEdit_amp");

        gridLayout->addWidget(lineEdit_amp, 2, 2, 1, 1);

        lineEdit_freq = new QLineEdit(centralwidget);
        lineEdit_freq->setObjectName("lineEdit_freq");

        gridLayout->addWidget(lineEdit_freq, 2, 3, 1, 1);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 0, 0, 1, 4);

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
        Apply_run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        Apply_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Amplitude", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
