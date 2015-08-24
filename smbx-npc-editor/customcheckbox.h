#ifndef CUSTOMCHECKBOX_H
#define CUSTOMCHECKBOX_H

#include <QWidget>

namespace Ui {
class customCheckbox;
}

class customCheckbox : public QWidget
{
    Q_OBJECT

public:
    explicit customCheckbox(QWidget *parent = 0);
    ~customCheckbox();
    void setText(QString text);
    void setState(bool en);
    void setValue(int value);
    int getValue();

private slots:
    void on_enCheckBox_clicked();

private:
    Ui::customCheckbox *ui;
};

#endif // CUSTOMCHECKBOX_H
