/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *Equal;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Num7;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *Num4;
    QPushButton *Num5;
    QPushButton *Num6;
    QPushButton *Num1;
    QPushButton *Num3;
    QPushButton *Num0;
    QPushButton *Dot;
    QPushButton *Num2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *Sum;
    QPushButton *Mul;
    QPushButton *Div;
    QPushButton *Sub;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QPushButton *Clear;
    QPushButton *Back;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(378, 420);
        Equal = new QPushButton(Widget);
        Equal->setObjectName(QStringLiteral("Equal"));
        Equal->setGeometry(QRect(280, 270, 71, 91));
        QFont font;
        font.setPointSize(20);
        Equal->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 40, 341, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 150, 181, 221));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Num7 = new QPushButton(layoutWidget);
        Num7->setObjectName(QStringLiteral("Num7"));
        Num7->setFont(font);

        gridLayout->addWidget(Num7, 0, 0, 1, 1);

        Num8 = new QPushButton(layoutWidget);
        Num8->setObjectName(QStringLiteral("Num8"));
        Num8->setFont(font);

        gridLayout->addWidget(Num8, 0, 1, 1, 1);

        Num9 = new QPushButton(layoutWidget);
        Num9->setObjectName(QStringLiteral("Num9"));
        Num9->setFont(font);

        gridLayout->addWidget(Num9, 0, 2, 1, 1);

        Num4 = new QPushButton(layoutWidget);
        Num4->setObjectName(QStringLiteral("Num4"));
        Num4->setFont(font);

        gridLayout->addWidget(Num4, 1, 0, 1, 1);

        Num5 = new QPushButton(layoutWidget);
        Num5->setObjectName(QStringLiteral("Num5"));
        Num5->setFont(font);

        gridLayout->addWidget(Num5, 1, 1, 1, 1);

        Num6 = new QPushButton(layoutWidget);
        Num6->setObjectName(QStringLiteral("Num6"));
        Num6->setFont(font);

        gridLayout->addWidget(Num6, 1, 2, 1, 1);

        Num1 = new QPushButton(layoutWidget);
        Num1->setObjectName(QStringLiteral("Num1"));
        Num1->setFont(font);

        gridLayout->addWidget(Num1, 2, 0, 1, 1);

        Num3 = new QPushButton(layoutWidget);
        Num3->setObjectName(QStringLiteral("Num3"));
        Num3->setFont(font);

        gridLayout->addWidget(Num3, 2, 2, 1, 1);

        Num0 = new QPushButton(layoutWidget);
        Num0->setObjectName(QStringLiteral("Num0"));
        Num0->setFont(font);

        gridLayout->addWidget(Num0, 3, 0, 1, 2);

        Dot = new QPushButton(layoutWidget);
        Dot->setObjectName(QStringLiteral("Dot"));
        Dot->setFont(font);

        gridLayout->addWidget(Dot, 3, 2, 1, 1);

        Num2 = new QPushButton(layoutWidget);
        Num2->setObjectName(QStringLiteral("Num2"));
        Num2->setFont(font);

        gridLayout->addWidget(Num2, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 150, 61, 221));
        layoutWidget1->setFont(font);
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Sum = new QPushButton(layoutWidget1);
        Sum->setObjectName(QStringLiteral("Sum"));
        Sum->setFont(font);

        gridLayout_2->addWidget(Sum, 0, 0, 1, 1);

        Mul = new QPushButton(layoutWidget1);
        Mul->setObjectName(QStringLiteral("Mul"));
        Mul->setFont(font);

        gridLayout_2->addWidget(Mul, 2, 0, 1, 1);

        Div = new QPushButton(layoutWidget1);
        Div->setObjectName(QStringLiteral("Div"));
        Div->setFont(font);

        gridLayout_2->addWidget(Div, 3, 0, 1, 1);

        Sub = new QPushButton(layoutWidget1);
        Sub->setObjectName(QStringLiteral("Sub"));
        Sub->setFont(font);

        gridLayout_2->addWidget(Sub, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(281, 151, 71, 111));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Clear = new QPushButton(layoutWidget2);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setFont(font);

        gridLayout_3->addWidget(Clear, 0, 0, 1, 1);

        Back = new QPushButton(layoutWidget2);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);

        gridLayout_3->addWidget(Back, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        Equal->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        lineEdit->setText(QString());
        Num7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        Num8->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        Num9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        Num4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        Num5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        Num6->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        Num1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        Num3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        Num0->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        Dot->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        Num2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        Sum->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        Mul->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        Div->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        Sub->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        Clear->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        Back->setText(QApplication::translate("Widget", "<---", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
