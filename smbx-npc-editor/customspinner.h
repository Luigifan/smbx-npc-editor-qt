#ifndef CUSTOMSPINNER_H
#define CUSTOMSPINNER_H

#include <QWidget>
#include <QtUiPlugin/customwidget.h>

namespace Ui {
class customSpinner;
}

class customSpinner : public QWidget, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit customSpinner(QWidget *parent = 0);
    ~customSpinner();
    void setText(QString text);

    QString name() const;
    QString includeFile() const;
    QIcon icon() const;
    QString group() const;
    QString toolTip() const;
    QString whatsThis() const;
    bool isContainer() const;
    QWidget *createWidget(QWidget *parent);
    int getValue();
    void setState(bool en);
    void setFlat(bool bleh);
    void setValue(int value);
    int getValueOfSpinner();

private slots:
    void on_checkBox_clicked();

private:
    Ui::customSpinner *ui;
};

#endif // CUSTOMSPINNER_H
