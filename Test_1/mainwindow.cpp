#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Вычисляем наши данные

    ui->widget->clearGraphs();//Если нужно, но очищаем все графики

    //Добавляем один график в widget
    ui->widget->addGraph();

    //Подписываем оси Ox и Oy
    ui->widget->xAxis->setLabel("t");
    ui->widget->yAxis->setLabel("y");

    ui->lineEdit_amp->setText("1.0");
    ui->lineEdit_freq->setText("1.0");

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах

    ui->widget->yAxis->setRange(-5, 5);//Для оси Oy

    //Установим область, которая будет показываться на графике
    ui->widget->xAxis->setRange(0,2000);//Для оси Ox

    //Init Timer

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(PlaybackStep())); //привязка события к функции PlaybackStep()
    //timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PlaybackStep()
{

    Amplitude = ui->lineEdit_amp->text().toDouble();
    Frequency = ui->lineEdit_freq->text().toDouble();
    // calculate two new data points:
    t+=1; // time elapsed since start of demo, in seconds
    y =Amplitude*qSin(Frequency*( M_PI/180) * t);

    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->widget->graph(0)->addData(t,y);

    //И перерисуем график на нашем widget
    ui->widget->replot();

}

void MainWindow::on_Apply_run_clicked()
{
    timer->start();
}


void MainWindow::on_Apply_stop_clicked()
{
    timer->stop();
}


void MainWindow::on_Apply_stop_2_clicked()
{
    ui->widget->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->widget->addGraph();
    ui->widget->replot();
}

