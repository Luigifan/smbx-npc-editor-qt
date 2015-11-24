#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include "new_npc.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() ^ Qt::WindowMaximizeButtonHint);
    setFixedSize(size());

    QList<customSpinner*> list = this->findChildren<customSpinner*>();
    foreach(customSpinner *w, list)
    {
        w->setState(false);
    }

    QList<customCheckbox*> list2 = this->findChildren<customCheckbox*>();
    foreach(customCheckbox *w, list2)
    {
        w->setState(false);
    }

    ui->score->setState(false);

    this->currentOpenNPC = new new_npc();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(("SMBX NPC Editor by Mike Santiago."));
    msgBox.exec();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName;
#ifdef __APPLE__ //this modality crap glitches on Windows
    QFileDialog f;
    f.setParent(this);
    f.setWindowModality(Qt::WindowModal);
    f.setFilter("NPC Text Files (npc-*.txt);;Text Files (*.txt)");
    int res = f.exec();

    if(res == 1)
        if(f.selectedFiles()[0] != NULL)
            fileName = f.selectedFiles()[0];
#else
    //"NPC Text Files (npc-*.txt);;Text Files (*.txt)"
    QFileDialog f;
    QDir d("");
    d.setNameFilters(QStringList() << "*.txt" << "npc-*.txt");
    f.setFilter(d.filter());
    f.exec();
    if(f.selectedFiles()[0] != NULL)
    {
        fileName = f.selectedFiles()[0];
    }
#endif
    currentOpenNPC->loadNPC(fileName);
    loadNPCIntoValues();
}

void MainWindow::loadNPCIntoValues()
{
    QMap<QString, QString>::iterator i = this->currentOpenNPC->npc_values->begin();
    while(i != currentOpenNPC->npc_values->end())
    {
        QList<QWidget*> list = findChildren<QWidget*>(i.key());
        if(list.count() > 0)
        {
            QString className = QString(list[0]->metaObject()->className());
            if(className == QString("scoreComboBox"))
            {
                scoreComboBox *castrated = (scoreComboBox*)list[0];
                castrated->setValue(i.value().toInt());
            }
            else if(className == QString("customCheckbox"))
            {
                customCheckbox *castrated = (customCheckbox*)list[0];
                castrated->setValue(i.value().toInt());
            }
            else if(className == QString("customSpinner"))
            {
                customSpinner *castrated = (customSpinner*)list[0];
                castrated->setValue(i.value().toInt());
            }
        }
        i++;
    }
}



