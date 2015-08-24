/********************************************************************************
** Form generated from reading UI file 'customspinner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMSPINNER_H
#define UI_CUSTOMSPINNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customSpinner
{
public:
    QLabel *textLabel;
    QSpinBox *spinBox;
    QCheckBox *checkBox;

    void setupUi(QWidget *customSpinner)
    {
        if (customSpinner->objectName().isEmpty())
            customSpinner->setObjectName(QString::fromUtf8("customSpinner"));
        customSpinner->resize(266, 38);
        textLabel = new QLabel(customSpinner);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setGeometry(QRect(10, 10, 141, 21));
        spinBox = new QSpinBox(customSpinner);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(161, 10, 51, 22));
        spinBox->setMaximum(999);
        checkBox = new QCheckBox(customSpinner);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(220, 10, 16, 17));

        retranslateUi(customSpinner);

        QMetaObject::connectSlotsByName(customSpinner);
    } // setupUi

    void retranslateUi(QWidget *customSpinner)
    {
        customSpinner->setWindowTitle(QApplication::translate("customSpinner", "Form", 0, QApplication::UnicodeUTF8));
        customSpinner->setProperty("tag", QVariant(QApplication::translate("customSpinner", "outputname", 0, QApplication::UnicodeUTF8)));
        textLabel->setText(QApplication::translate("customSpinner", "TextLabel", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customSpinner: public Ui_customSpinner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMSPINNER_H
