#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "new_npc.h"
#include <iostream>

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
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
    new_npc *currentOpenNPC;
    void loadNPCIntoValues();
    void saveNPCValues();
};

#endif // MAINWINDOW_H
