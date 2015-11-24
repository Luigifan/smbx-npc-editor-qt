/********************************************************************************
** Form generated from reading UI file 'scorecombobox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORECOMBOBOX_H
#define UI_SCORECOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scoreComboBox
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *checkBox;

    void setupUi(QWidget *scoreComboBox)
    {
        if (scoreComboBox->objectName().isEmpty())
            scoreComboBox->setObjectName(QStringLiteral("scoreComboBox"));
        scoreComboBox->resize(269, 38);
        label = new QLabel(scoreComboBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 47, 20));
        comboBox = new QComboBox(scoreComboBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 10, 121, 22));
        checkBox = new QCheckBox(scoreComboBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(220, 10, 20, 20));

        retranslateUi(scoreComboBox);

        QMetaObject::connectSlotsByName(scoreComboBox);
    } // setupUi

    void retranslateUi(QWidget *scoreComboBox)
    {
        scoreComboBox->setWindowTitle(QApplication::translate("scoreComboBox", "Form", 0));
        label->setText(QApplication::translate("scoreComboBox", "Score:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("scoreComboBox", "None", 0)
         << QApplication::translate("scoreComboBox", "10", 0)
         << QApplication::translate("scoreComboBox", "100", 0)
         << QApplication::translate("scoreComboBox", "200", 0)
         << QApplication::translate("scoreComboBox", "400", 0)
         << QApplication::translate("scoreComboBox", "800", 0)
         << QApplication::translate("scoreComboBox", "1000", 0)
         << QApplication::translate("scoreComboBox", "2000", 0)
         << QApplication::translate("scoreComboBox", "4000", 0)
         << QApplication::translate("scoreComboBox", "8000", 0)
         << QApplication::translate("scoreComboBox", "1-Up", 0)
         << QApplication::translate("scoreComboBox", "2-Up", 0)
         << QApplication::translate("scoreComboBox", "3-Up", 0)
         << QApplication::translate("scoreComboBox", "5-Up", 0)
        );
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scoreComboBox: public Ui_scoreComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORECOMBOBOX_H
