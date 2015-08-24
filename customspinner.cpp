#include "customspinner.h"
#include "ui_customspinner.h"
#include <Qt>

customSpinner::customSpinner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customSpinner)
{
    ui->setupUi(this);
}

int customSpinner::getValueOfSpinner()
{
    return ui->spinBox->value();
}

void customSpinner::setValue(int value)
{
    ui->spinBox->setValue(value);
    setState(true);
}

QString customSpinner::includeFile() const{
    return "customspinner.h";
}

QString customSpinner::name() const{
    return "CustomSpinner";
}

QString customSpinner::group() const{
    return "NPC Editor Custom";
}

QString customSpinner::toolTip() const
{
    return tr("Custom spinner for the SMBX NPC Editor");
}

QString customSpinner::whatsThis()const{
    return tr("Witchcraft");
}

bool customSpinner::isContainer()const{
    return false;
}

QIcon customSpinner::icon() const
{
    return QIcon("");
}

QWidget *customSpinner::createWidget(QWidget *parent)
{
    return new customSpinner(parent);
}

void customSpinner::setText(QString text)
{
    ui->textLabel->setText(text);
}

int customSpinner::getValue()
{
    return ui->spinBox->value();
}

void customSpinner::setState(bool en)
{
    ui->checkBox->setChecked(en);
    ui->spinBox->setEnabled(en);
}

customSpinner::~customSpinner()
{
    delete ui;
}

void customSpinner::setFlat(bool bleh)
{
//useless..
}

void customSpinner::on_checkBox_clicked()
{
    if(ui->checkBox->checkState() == Qt::Checked)
    {
        ui->spinBox->setEnabled(true);
    }
    else
    {
        ui->spinBox->setEnabled(false);
    }
}
