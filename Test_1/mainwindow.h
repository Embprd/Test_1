 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QTimer *timer;
    double t = 0;
    double y = 0;
   // QVector<double> x, y; //Массивы координат точек

private slots:
    void  PlaybackStep();
    void on_Apply_run_clicked();
    void on_Apply_stop_clicked();
};
#endif // MAINWINDOW_H
