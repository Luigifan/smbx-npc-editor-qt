/********************************************************************************
** Form generated from reading UI file 'customspinner.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMSPINNER_H
#define UI_CUSTOMSPINNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

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
            customSpinner->setObjectName(QStringLiteral("customSpinner"));
        customSpinner->resize(266, 38);
        textLabel = new QLabel(customSpinner);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(10, 10, 141, 21));
        spinBox = new QSpinBox(customSpinner);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(161, 10, 51, 22));
        spinBox->setMaximum(999);
        checkBox = new QCheckBox(customSpinner);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(220, 10, 16, 17));

        retranslateUi(customSpinner);

        QMetaObject::connectSlotsByName(customSpinner);
    } // setupUi

    void retranslateUi(QWidget *customSpinner)
    {
        customSpinner->setWindowTitle(QApplication::translate("customSpinner", "Form", 0));
        customSpinner->setProperty("tag", QVariant(QApplication::translate("customSpinner", "outputname", 0)));
        textLabel->setText(QApplication::translate("customSpinner", "TextLabel", 0));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class customSpinner: public Ui_customSpinner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMSPINNER_H
