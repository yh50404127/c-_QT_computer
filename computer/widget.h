#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

enum BtnType{
    Num,
    Op,
    Dot,
    Equal,
    Clear,
    Back
};

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    QString mNum1;
    QString mNum2;
    QString mOp;

public slots:
    void OnClicked(BtnType _type,QString _btn);
};

#endif // WIDGET_H
