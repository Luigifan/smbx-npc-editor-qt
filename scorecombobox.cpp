#include "scorecombobox.h"
#include "ui_scorecombobox.h"

scoreComboBox::scoreComboBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scoreComboBox)
{
    ui->setupUi(this);
}


void scoreComboBox::setText(QString text)
{

}

scoreComboBox::~scoreComboBox()
{
    delete ui;
}

void scoreComboBox::setValue(int value)
{
    ui->comboBox->setCurrentIndex(value);
    setState(true);
}

int scoreComboBox::getIndex()
{
    return ui->comboBox->currentIndex();
}

void scoreComboBox::setState(bool en)
{
    ui->checkBox->setChecked(en);
    ui->comboBox->setEnabled(en);
}

void scoreComboBox::on_checkBox_clicked()
{
    if(ui->checkBox->checkState() == Qt::Checked)
    {
        ui->comboBox->setEnabled(true);
    }
    else
    {
        ui->comboBox->setEnabled(false);
    }
}
