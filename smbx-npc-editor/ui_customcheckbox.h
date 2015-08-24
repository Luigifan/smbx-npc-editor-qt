/********************************************************************************
** Form generated from reading UI file 'customcheckbox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCHECKBOX_H
#define UI_CUSTOMCHECKBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customCheckbox
{
public:
    QLabel *label;
    QCheckBox *valueCheckBox;
    QCheckBox *enCheckBox;

    void setupUi(QWidget *customCheckbox)
    {
        if (customCheckbox->objectName().isEmpty())
            customCheckbox->setObjectName(QString::fromUtf8("customCheckbox"));
        customCheckbox->resize(260, 38);
        label = new QLabel(customCheckbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 20));
        valueCheckBox = new QCheckBox(customCheckbox);
        valueCheckBox->setObjectName(QString::fromUtf8("valueCheckBox"));
        valueCheckBox->setGeometry(QRect(160, 10, 21, 20));
        enCheckBox = new QCheckBox(customCheckbox);
        enCheckBox->setObjectName(QString::fromUtf8("enCheckBox"));
        enCheckBox->setGeometry(QRect(220, 10, 21, 20));

        retranslateUi(customCheckbox);

        QMetaObject::connectSlotsByName(customCheckbox);
    } // setupUi

    void retranslateUi(QWidget *customCheckbox)
    {
        customCheckbox->setWindowTitle(QApplication::translate("customCheckbox", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("customCheckbox", "TextLabel", 0, QApplication::UnicodeUTF8));
        valueCheckBox->setText(QString());
        enCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customCheckbox: public Ui_customCheckbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCHECKBOX_H
