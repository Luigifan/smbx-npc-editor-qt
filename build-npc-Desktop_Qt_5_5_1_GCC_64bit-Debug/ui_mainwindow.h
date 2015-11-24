/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(841, 471);
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionChange_SMBX_Directory = new QAction(MainWindow);
        actionChange_SMBX_Directory->setObjectName(QStringLiteral("actionChange_SMBX_Directory"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 821, 391));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 241, 361));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gfxheight = new customSpinner(layoutWidget1);
        gfxheight->setObjectName(QStringLiteral("gfxheight"));
        gfxheight->setFlat(false);

        verticalLayout->addWidget(gfxheight);

        gfxwidth = new customSpinner(layoutWidget1);
        gfxwidth->setObjectName(QStringLiteral("gfxwidth"));

        verticalLayout->addWidget(gfxwidth);

        gfxoffsetx = new customSpinner(layoutWidget1);
        gfxoffsetx->setObjectName(QStringLiteral("gfxoffsetx"));

        verticalLayout->addWidget(gfxoffsetx);

        gfxoffsety = new customSpinner(layoutWidget1);
        gfxoffsety->setObjectName(QStringLiteral("gfxoffsety"));

        verticalLayout->addWidget(gfxoffsety);

        frames = new customSpinner(layoutWidget1);
        frames->setObjectName(QStringLiteral("frames"));

        verticalLayout->addWidget(frames);

        framespeed = new customSpinner(layoutWidget1);
        framespeed->setObjectName(QStringLiteral("framespeed"));

        verticalLayout->addWidget(framespeed);

        framestyle = new customSpinner(layoutWidget1);
        framestyle->setObjectName(QStringLiteral("framestyle"));

        verticalLayout->addWidget(framestyle);

        foreground = new customCheckbox(layoutWidget1);
        foreground->setObjectName(QStringLiteral("foreground"));

        verticalLayout->addWidget(foreground);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 241, 361));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        height = new customSpinner(layoutWidget2);
        height->setObjectName(QStringLiteral("height"));

        verticalLayout_2->addWidget(height);

        width = new customSpinner(layoutWidget2);
        width->setObjectName(QStringLiteral("width"));

        verticalLayout_2->addWidget(width);

        playerblock = new customSpinner(layoutWidget2);
        playerblock->setObjectName(QStringLiteral("playerblock"));

        verticalLayout_2->addWidget(playerblock);

        playerblocktop = new customSpinner(layoutWidget2);
        playerblocktop->setObjectName(QStringLiteral("playerblocktop"));

        verticalLayout_2->addWidget(playerblocktop);

        npcblock = new customSpinner(layoutWidget2);
        npcblock->setObjectName(QStringLiteral("npcblock"));

        verticalLayout_2->addWidget(npcblock);

        npcblocktop = new customSpinner(layoutWidget2);
        npcblocktop->setObjectName(QStringLiteral("npcblocktop"));

        verticalLayout_2->addWidget(npcblocktop);

        noblockcollision = new customSpinner(layoutWidget2);
        noblockcollision->setObjectName(QStringLiteral("noblockcollision"));

        verticalLayout_2->addWidget(noblockcollision);

        cliffturn = new customCheckbox(layoutWidget2);
        cliffturn->setObjectName(QStringLiteral("cliffturn"));

        verticalLayout_2->addWidget(cliffturn);

        nogravity = new customCheckbox(layoutWidget2);
        nogravity->setObjectName(QStringLiteral("nogravity"));

        verticalLayout_2->addWidget(nogravity);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 251, 361));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        score = new scoreComboBox(layoutWidget3);
        score->setObjectName(QStringLiteral("score"));

        verticalLayout_3->addWidget(score);

        grabside = new customCheckbox(layoutWidget3);
        grabside->setObjectName(QStringLiteral("grabside"));

        verticalLayout_3->addWidget(grabside);

        grabtop = new customCheckbox(layoutWidget3);
        grabtop->setObjectName(QStringLiteral("grabtop"));

        verticalLayout_3->addWidget(grabtop);

        jumphurt = new customCheckbox(layoutWidget3);
        jumphurt->setObjectName(QStringLiteral("jumphurt"));

        verticalLayout_3->addWidget(jumphurt);

        nohurt = new customCheckbox(layoutWidget3);
        nohurt->setObjectName(QStringLiteral("nohurt"));

        verticalLayout_3->addWidget(nohurt);

        noyoshi = new customCheckbox(layoutWidget3);
        noyoshi->setObjectName(QStringLiteral("noyoshi"));

        verticalLayout_3->addWidget(noyoshi);

        speed = new customSpinner(layoutWidget3);
        speed->setObjectName(QStringLiteral("speed"));

        verticalLayout_3->addWidget(speed);

        nofireball = new customCheckbox(layoutWidget3);
        nofireball->setObjectName(QStringLiteral("nofireball"));

        verticalLayout_3->addWidget(nofireball);

        noiceball = new customCheckbox(layoutWidget3);
        noiceball->setObjectName(QStringLiteral("noiceball"));

        verticalLayout_3->addWidget(noiceball);


        horizontalLayout->addWidget(groupBox_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 81, 16));
        name = new QLineEdit(centralWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(110, 20, 151, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SMBX NPC Editor", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionChange_SMBX_Directory->setText(QApplication::translate("MainWindow", "Change SMBX Directory", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Graphics", 0));
        gfxheight->setText(QApplication::translate("MainWindow", "Height", 0));
        gfxwidth->setText(QApplication::translate("MainWindow", "Width", 0));
        gfxoffsetx->setText(QApplication::translate("MainWindow", "X Offset", 0));
        gfxoffsety->setText(QApplication::translate("MainWindow", "Y Offset", 0));
        frames->setText(QApplication::translate("MainWindow", "Frames", 0));
        framespeed->setText(QApplication::translate("MainWindow", "Framespeed", 0));
        framestyle->setText(QApplication::translate("MainWindow", "Framestyle", 0));
        foreground->setText(QApplication::translate("MainWindow", "Foreground", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Physics", 0));
        height->setText(QApplication::translate("MainWindow", "Height", 0));
        width->setText(QApplication::translate("MainWindow", "Width", 0));
        playerblock->setText(QApplication::translate("MainWindow", "Player Collision", 0));
        playerblocktop->setText(QApplication::translate("MainWindow", "Player Collision (Top)", 0));
        npcblock->setText(QApplication::translate("MainWindow", "NPC Collision", 0));
        npcblocktop->setText(QApplication::translate("MainWindow", "NPC Collision (Top)", 0));
        noblockcollision->setText(QApplication::translate("MainWindow", "No Block Collision", 0));
        cliffturn->setText(QApplication::translate("MainWindow", "Turn on Cliff", 0));
        nogravity->setText(QApplication::translate("MainWindow", "No Gravity", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Game", 0));
        score->setText(QApplication::translate("MainWindow", "Score", 0));
        grabside->setText(QApplication::translate("MainWindow", "Grab Side", 0));
        grabtop->setText(QApplication::translate("MainWindow", "Grab Top", 0));
        jumphurt->setText(QApplication::translate("MainWindow", "Jump Hurt", 0));
        nohurt->setText(QApplication::translate("MainWindow", "Don't Hurt", 0));
        noyoshi->setText(QApplication::translate("MainWindow", "Can't be eaten", 0));
        speed->setText(QApplication::translate("MainWindow", "Speed", 0));
        nofireball->setText(QApplication::translate("MainWindow", "No fireball", 0));
        noiceball->setText(QApplication::translate("MainWindow", "Can't freeze", 0));
        label->setText(QApplication::translate("MainWindow", "NPC Name: ", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
