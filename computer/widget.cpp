#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->Num0,&QPushButton::clicked,[this](){OnClicked(Num,"0");});
    connect(ui->Num1,&QPushButton::clicked,[this](){OnClicked(Num,"1");});
    connect(ui->Num2,&QPushButton::clicked,[this](){OnClicked(Num,"2");});
    connect(ui->Num3,&QPushButton::clicked,[this](){OnClicked(Num,"3");});
    connect(ui->Num4,&QPushButton::clicked,[this](){OnClicked(Num,"4");});
    connect(ui->Num5,&QPushButton::clicked,[this](){OnClicked(Num,"5");});
    connect(ui->Num6,&QPushButton::clicked,[this](){OnClicked(Num,"6");});
    connect(ui->Num7,&QPushButton::clicked,[this](){OnClicked(Num,"7");});
    connect(ui->Num8,&QPushButton::clicked,[this](){OnClicked(Num,"8");});
    connect(ui->Num9,&QPushButton::clicked,[this](){OnClicked(Num,"9");});

    connect(ui->Sum,&QPushButton::clicked,[this](){OnClicked(Op,"+");});
    connect(ui->Sub,&QPushButton::clicked,[this](){OnClicked(Op,"-");});
    connect(ui->Mul,&QPushButton::clicked,[this](){OnClicked(Op,"*");});
    connect(ui->Div,&QPushButton::clicked,[this](){OnClicked(Op,"/");});

    connect(ui->Back,&QPushButton::clicked,[this](){OnClicked(Back,"Back");});
    connect(ui->Clear,&QPushButton::clicked,[this](){OnClicked(Clear,"Clear");});
    connect(ui->Dot,&QPushButton::clicked,[this](){OnClicked(Dot,".");});
    connect(ui->Equal,&QPushButton::clicked,[this](){OnClicked(Equal,"=");});
}

Widget::~Widget()
{
    delete ui;
}

void Widget::OnClicked(BtnType _type,QString _btn){

    switch (_type) {

        case Num :{
            if(mOp.isEmpty()){
                mNum1 += _btn;
            }else {
                mNum2 += _btn;
            }
            break;
        }

        case Op :{
            if(mNum1.isEmpty()){
                if(_btn == "-"){
                    mNum1 = "0";
                    mOp = "-";
                    ui->lineEdit->setText(mNum1 + mOp + mNum2);
                }
                return;
            }
            if(!mNum1.isEmpty() && !mNum2.isEmpty()){
                double num1 = mNum1.toDouble();
                double num2 = mNum2.toDouble();
                double result = 0.0;
                if(mOp == "+")
                    result = num1 + num2;
                else if(mOp == "-")
                    result = num1 - num2;
                else if(mOp == "*")
                    result = num1 * num2;
                else if(mOp == "/"){
                    if(num2 == 0.0){
                        ui->lineEdit->setText("除數不能是0!");
                        return;
                    }else{
                        result = num1 / num2;
                    }

                }
                ui->lineEdit->setText(QString::number(result));
                mNum1 = QString::number(result);
                mNum2.clear();
            }
            mOp = _btn;
            break;
        }

        case Clear :{
            mOp.clear();
            mNum1.clear();
            mNum2.clear();
            break;
        }

        case Dot :{
            if(mOp.isEmpty()){
                if(!mNum1.isEmpty() && !mNum1.contains(".")){
                    mNum1 += _btn;
                }
            }else {
                if(!mNum2.isEmpty() && !mNum2.contains(".")){
                    mNum2 += _btn;
                }
            }
            break;
        }

        case Equal :{
            if(mNum1.isEmpty() || mNum2.isEmpty() || mOp.isEmpty())
                return;

            double num1 = mNum1.toDouble();
            double num2 = mNum2.toDouble();
            double result = 0.0;
            if(mOp == "+")
                result = num1 + num2;
            else if(mOp == "-")
                result = num1 - num2;
            else if(mOp == "*")
                result = num1 * num2;
            else if(mOp == "/"){
                if(num2 == 0.0){
                    ui->lineEdit->setText("除數不能是0!");
                    return;
                }else{
                    result = num1 / num2;
                }

            }
            ui->lineEdit->setText(QString::number(result));
            mOp.clear();
            mNum1.clear();
            mNum2.clear();
            return;
        }

        case Back :{
            if(!mNum1.isEmpty() && !mOp.isEmpty() && !mNum2.isEmpty()){
                mNum2.chop(1);
            }else if(!mNum1.isEmpty() && !mOp.isEmpty()){
                mOp.chop(1);
            }else if(!mNum1.isEmpty()){
                mNum1.chop(1);
            }
            break;
        }




    }
    ui->lineEdit->setText(mNum1 + mOp + mNum2);
}
