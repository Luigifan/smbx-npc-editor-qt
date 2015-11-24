/********************************************************************************
** Form generated from reading UI file 'customcheckbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCHECKBOX_H
#define UI_CUSTOMCHECKBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

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
            customCheckbox->setObjectName(QStringLiteral("customCheckbox"));
        customCheckbox->resize(260, 38);
        label = new QLabel(customCheckbox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 20));
        valueCheckBox = new QCheckBox(customCheckbox);
        valueCheckBox->setObjectName(QStringLiteral("valueCheckBox"));
        valueCheckBox->setGeometry(QRect(160, 10, 21, 20));
        enCheckBox = new QCheckBox(customCheckbox);
        enCheckBox->setObjectName(QStringLiteral("enCheckBox"));
        enCheckBox->setGeometry(QRect(220, 10, 21, 20));

        retranslateUi(customCheckbox);

        QMetaObject::connectSlotsByName(customCheckbox);
    } // setupUi

    void retranslateUi(QWidget *customCheckbox)
    {
        customCheckbox->setWindowTitle(QApplication::translate("customCheckbox", "Form", 0));
        label->setText(QApplication::translate("customCheckbox", "TextLabel", 0));
        valueCheckBox->setText(QString());
        enCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customCheckbox: public Ui_customCheckbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCHECKBOX_H
