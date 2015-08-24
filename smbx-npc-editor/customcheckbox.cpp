#include "customcheckbox.h"
#include "ui_customcheckbox.h"

customCheckbox::customCheckbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customCheckbox)
{
    ui->setupUi(this);
}

customCheckbox::~customCheckbox()
{
    delete ui;
}

void customCheckbox::setText(QString text)
{
    ui->label->setText(text);
}

void customCheckbox::setValue(int value)
{
    ui->valueCheckBox->setChecked((value == 1) ? true : false);
    setState(true);
}

int customCheckbox::getValue()
{
    return (ui->valueCheckBox->checkState() == Qt::Checked) ? 1 : 0;
}

void customCheckbox::setState(bool en)
{
    ui->valueCheckBox->setEnabled(en);
    ui->enCheckBox->setChecked(en);
}

void customCheckbox::on_enCheckBox_clicked()
{
    if(ui->enCheckBox->checkState() == Qt::Checked)
    {
        ui->valueCheckBox->setEnabled(true);
    }
    else
    {
        ui->valueCheckBox->setEnabled(false);
    }
}
