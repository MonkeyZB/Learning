//////////////////////////////////////////////////////////////////////////
// mainwindow.h -- Header file for the main window.
//
// Tiantian Liu
// 11/11/2011
// University of Pennsylvania

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QComboBox>
#include <QTabWidget>
#include "graphwidget.h"
#include "glwidget.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAbout_triggered();

    void on_actionTool_Bar_triggered(bool checked);

    void on_actionStatus_bar_triggered(bool checked);

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;

    QTabWidget *tabwidget;
    GraphWidget *graphwidget;
    GLWidget *glwidget;
};

#endif // MAINWINDOW_H
