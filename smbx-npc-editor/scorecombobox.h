#ifndef SCORECOMBOBOX_H
#define SCORECOMBOBOX_H

#include <QWidget>

namespace Ui {
class scoreComboBox;
}

class scoreComboBox : public QWidget
{
    Q_OBJECT

public:
    explicit scoreComboBox(QWidget *parent = 0);
    ~scoreComboBox();
    void setText(QString text);
    void setState(bool en);
    void setValue(int value);
    int getIndex();

private slots:
    void on_checkBox_clicked();

private:
    Ui::scoreComboBox *ui;
};

#endif // SCORECOMBOBOX_H
