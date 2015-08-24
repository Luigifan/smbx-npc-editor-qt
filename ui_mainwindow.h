/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <customcheckbox.h>
#include <customspinner.h>
#include <scorecombobox.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionChange_SMBX_Directory;
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    customSpinner *gfxheight;
    customSpinner *gfxwidth;
    customSpinner *gfxoffsetx;
    customSpinner *gfxoffsety;
    customSpinner *frames;
    customSpinner *framespeed;
    customSpinner *framestyle;
    customCheckbox *foreground;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    customSpinner *height;
    customSpinner *width;
    customSpinner *playerblock;
    customSpinner *playerblocktop;
    customSpinner *npcblock;
    customSpinner *npcblocktop;
    customSpinner *noblockcollision;
    customCheckbox *cliffturn;
    customCheckbox *nogravity;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    scoreComboBox *score;
    customCheckbox *grabside;
    customCheckbox *grabtop;
    customCheckbox *jumphurt;
    customCheckbox *nohurt;
    customCheckbox *noyoshi;
    customSpinner *speed;
    customCheckbox *nofireball;
    customCheckbox *noiceball;
    QLabel *label;
    QLineEdit *name;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(841, 471);
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionChange_SMBX_Directory = new QAction(MainWindow);
        actionChange_SMBX_Directory->setObjectName(QString::fromUtf8("actionChange_SMBX_Directory"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 821, 391));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 241, 361));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gfxheight = new customSpinner(layoutWidget1);
        gfxheight->setObjectName(QString::fromUtf8("gfxheight"));
        gfxheight->setFlat(false);

        verticalLayout->addWidget(gfxheight);

        gfxwidth = new customSpinner(layoutWidget1);
        gfxwidth->setObjectName(QString::fromUtf8("gfxwidth"));

        verticalLayout->addWidget(gfxwidth);

        gfxoffsetx = new customSpinner(layoutWidget1);
        gfxoffsetx->setObjectName(QString::fromUtf8("gfxoffsetx"));

        verticalLayout->addWidget(gfxoffsetx);

        gfxoffsety = new customSpinner(layoutWidget1);
        gfxoffsety->setObjectName(QString::fromUtf8("gfxoffsety"));

        verticalLayout->addWidget(gfxoffsety);

        frames = new customSpinner(layoutWidget1);
        frames->setObjectName(QString::fromUtf8("frames"));

        verticalLayout->addWidget(frames);

        framespeed = new customSpinner(layoutWidget1);
        framespeed->setObjectName(QString::fromUtf8("framespeed"));

        verticalLayout->addWidget(framespeed);

        framestyle = new customSpinner(layoutWidget1);
        framestyle->setObjectName(QString::fromUtf8("framestyle"));

        verticalLayout->addWidget(framestyle);

        foreground = new customCheckbox(layoutWidget1);
        foreground->setObjectName(QString::fromUtf8("foreground"));

        verticalLayout->addWidget(foreground);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 241, 361));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        height = new customSpinner(layoutWidget2);
        height->setObjectName(QString::fromUtf8("height"));

        verticalLayout_2->addWidget(height);

        width = new customSpinner(layoutWidget2);
        width->setObjectName(QString::fromUtf8("width"));

        verticalLayout_2->addWidget(width);

        playerblock = new customSpinner(layoutWidget2);
        playerblock->setObjectName(QString::fromUtf8("playerblock"));

        verticalLayout_2->addWidget(playerblock);

        playerblocktop = new customSpinner(layoutWidget2);
        playerblocktop->setObjectName(QString::fromUtf8("playerblocktop"));

        verticalLayout_2->addWidget(playerblocktop);

        npcblock = new customSpinner(layoutWidget2);
        npcblock->setObjectName(QString::fromUtf8("npcblock"));

        verticalLayout_2->addWidget(npcblock);

        npcblocktop = new customSpinner(layoutWidget2);
        npcblocktop->setObjectName(QString::fromUtf8("npcblocktop"));

        verticalLayout_2->addWidget(npcblocktop);

        noblockcollision = new customSpinner(layoutWidget2);
        noblockcollision->setObjectName(QString::fromUtf8("noblockcollision"));

        verticalLayout_2->addWidget(noblockcollision);

        cliffturn = new customCheckbox(layoutWidget2);
        cliffturn->setObjectName(QString::fromUtf8("cliffturn"));

        verticalLayout_2->addWidget(cliffturn);

        nogravity = new customCheckbox(layoutWidget2);
        nogravity->setObjectName(QString::fromUtf8("nogravity"));

        verticalLayout_2->addWidget(nogravity);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 251, 361));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        score = new scoreComboBox(layoutWidget3);
        score->setObjectName(QString::fromUtf8("score"));

        verticalLayout_3->addWidget(score);

        grabside = new customCheckbox(layoutWidget3);
        grabside->setObjectName(QString::fromUtf8("grabside"));

        verticalLayout_3->addWidget(grabside);

        grabtop = new customCheckbox(layoutWidget3);
        grabtop->setObjectName(QString::fromUtf8("grabtop"));

        verticalLayout_3->addWidget(grabtop);

        jumphurt = new customCheckbox(layoutWidget3);
        jumphurt->setObjectName(QString::fromUtf8("jumphurt"));

        verticalLayout_3->addWidget(jumphurt);

        nohurt = new customCheckbox(layoutWidget3);
        nohurt->setObjectName(QString::fromUtf8("nohurt"));

        verticalLayout_3->addWidget(nohurt);

        noyoshi = new customCheckbox(layoutWidget3);
        noyoshi->setObjectName(QString::fromUtf8("noyoshi"));

        verticalLayout_3->addWidget(noyoshi);

        speed = new customSpinner(layoutWidget3);
        speed->setObjectName(QString::fromUtf8("speed"));

        verticalLayout_3->addWidget(speed);

        nofireball = new customCheckbox(layoutWidget3);
        nofireball->setObjectName(QString::fromUtf8("nofireball"));

        verticalLayout_3->addWidget(nofireball);

        noiceball = new customCheckbox(layoutWidget3);
        noiceball->setObjectName(QString::fromUtf8("noiceball"));

        verticalLayout_3->addWidget(noiceball);


        horizontalLayout->addWidget(groupBox_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 81, 16));
        name = new QLineEdit(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(110, 20, 151, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionChange_SMBX_Directory);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SMBX NPC Editor", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionChange_SMBX_Directory->setText(QApplication::translate("MainWindow", "Change SMBX Directory", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Graphics", 0, QApplication::UnicodeUTF8));
        gfxheight->setText(QApplication::translate("MainWindow", "Height", 0, QApplication::UnicodeUTF8));
        gfxwidth->setText(QApplication::translate("MainWindow", "Width", 0, QApplication::UnicodeUTF8));
        gfxoffsetx->setText(QApplication::translate("MainWindow", "X Offset", 0, QApplication::UnicodeUTF8));
        gfxoffsety->setText(QApplication::translate("MainWindow", "Y Offset", 0, QApplication::UnicodeUTF8));
        frames->setText(QApplication::translate("MainWindow", "Frames", 0, QApplication::UnicodeUTF8));
        framespeed->setText(QApplication::translate("MainWindow", "Framespeed", 0, QApplication::UnicodeUTF8));
        framestyle->setText(QApplication::translate("MainWindow", "Framestyle", 0, QApplication::UnicodeUTF8));
        foreground->setText(QApplication::translate("MainWindow", "Foreground", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Physics", 0, QApplication::UnicodeUTF8));
        height->setText(QApplication::translate("MainWindow", "Height", 0, QApplication::UnicodeUTF8));
        width->setText(QApplication::translate("MainWindow", "Width", 0, QApplication::UnicodeUTF8));
        playerblock->setText(QApplication::translate("MainWindow", "Player Collision", 0, QApplication::UnicodeUTF8));
        playerblocktop->setText(QApplication::translate("MainWindow", "Player Collision (Top)", 0, QApplication::UnicodeUTF8));
        npcblock->setText(QApplication::translate("MainWindow", "NPC Collision", 0, QApplication::UnicodeUTF8));
        npcblocktop->setText(QApplication::translate("MainWindow", "NPC Collision (Top)", 0, QApplication::UnicodeUTF8));
        noblockcollision->setText(QApplication::translate("MainWindow", "No Block Collision", 0, QApplication::UnicodeUTF8));
        cliffturn->setText(QApplication::translate("MainWindow", "Turn on Cliff", 0, QApplication::UnicodeUTF8));
        nogravity->setText(QApplication::translate("MainWindow", "No Gravity", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Game", 0, QApplication::UnicodeUTF8));
        score->setText(QApplication::translate("MainWindow", "Score", 0, QApplication::UnicodeUTF8));
        grabside->setText(QApplication::translate("MainWindow", "Grab Side", 0, QApplication::UnicodeUTF8));
        grabtop->setText(QApplication::translate("MainWindow", "Grab Top", 0, QApplication::UnicodeUTF8));
        jumphurt->setText(QApplication::translate("MainWindow", "Jump Hurt", 0, QApplication::UnicodeUTF8));
        nohurt->setText(QApplication::translate("MainWindow", "Don't Hurt", 0, QApplication::UnicodeUTF8));
        noyoshi->setText(QApplication::translate("MainWindow", "Can't be eaten", 0, QApplication::UnicodeUTF8));
        speed->setText(QApplication::translate("MainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        nofireball->setText(QApplication::translate("MainWindow", "No fireball", 0, QApplication::UnicodeUTF8));
        noiceball->setText(QApplication::translate("MainWindow", "Can't freeze", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "NPC Name: ", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
