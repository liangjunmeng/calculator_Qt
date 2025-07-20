/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *screen;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *buttonRemainder;
    QPushButton *buttonDel;
    QPushButton *buttonAC;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *buttonMultiply;
    QPushButton *buttonDivide;
    QPushButton *buttonFactorial;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *buttonPlus;
    QPushButton *buttonMinus;
    QPushButton *buttonPower;
    QPushButton *button0;
    QPushButton *buttonDot;
    QPushButton *buttonLbracket;
    QPushButton *buttonRbracket;
    QPushButton *buttonE;
    QPushButton *buttonEqual;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(570, 536);
        Widget->setMinimumSize(QSize(60, 60));
        screen = new QLineEdit(Widget);
        screen->setObjectName("screen");
        screen->setGeometry(QRect(30, 40, 511, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        font.setBold(true);
        screen->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(24, 152, 517, 343));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button7 = new QPushButton(widget);
        button7->setObjectName("button7");
        button7->setMinimumSize(QSize(80, 80));
        button7->setMaximumSize(QSize(80, 80));
        button7->setFont(font);

        gridLayout->addWidget(button7, 0, 0, 1, 1);

        button8 = new QPushButton(widget);
        button8->setObjectName("button8");
        button8->setMinimumSize(QSize(80, 80));
        button8->setMaximumSize(QSize(80, 80));
        button8->setFont(font);

        gridLayout->addWidget(button8, 0, 1, 1, 1);

        button9 = new QPushButton(widget);
        button9->setObjectName("button9");
        button9->setMinimumSize(QSize(80, 80));
        button9->setMaximumSize(QSize(80, 80));
        button9->setFont(font);

        gridLayout->addWidget(button9, 0, 2, 1, 1);

        buttonRemainder = new QPushButton(widget);
        buttonRemainder->setObjectName("buttonRemainder");
        buttonRemainder->setMinimumSize(QSize(80, 80));
        buttonRemainder->setMaximumSize(QSize(80, 80));
        buttonRemainder->setFont(font);

        gridLayout->addWidget(buttonRemainder, 0, 3, 1, 1);

        buttonDel = new QPushButton(widget);
        buttonDel->setObjectName("buttonDel");
        buttonDel->setMinimumSize(QSize(80, 80));
        buttonDel->setMaximumSize(QSize(80, 80));
        buttonDel->setFont(font);

        gridLayout->addWidget(buttonDel, 0, 4, 1, 1);

        buttonAC = new QPushButton(widget);
        buttonAC->setObjectName("buttonAC");
        buttonAC->setMinimumSize(QSize(80, 80));
        buttonAC->setMaximumSize(QSize(80, 80));
        buttonAC->setFont(font);

        gridLayout->addWidget(buttonAC, 0, 5, 1, 1);

        button4 = new QPushButton(widget);
        button4->setObjectName("button4");
        button4->setMinimumSize(QSize(80, 80));
        button4->setMaximumSize(QSize(80, 80));
        button4->setFont(font);

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        button5 = new QPushButton(widget);
        button5->setObjectName("button5");
        button5->setMinimumSize(QSize(80, 80));
        button5->setMaximumSize(QSize(80, 80));
        button5->setFont(font);

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        button6 = new QPushButton(widget);
        button6->setObjectName("button6");
        button6->setMinimumSize(QSize(80, 80));
        button6->setMaximumSize(QSize(80, 80));
        button6->setFont(font);

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        buttonMultiply = new QPushButton(widget);
        buttonMultiply->setObjectName("buttonMultiply");
        buttonMultiply->setMinimumSize(QSize(80, 80));
        buttonMultiply->setMaximumSize(QSize(80, 80));
        buttonMultiply->setFont(font);

        gridLayout->addWidget(buttonMultiply, 1, 3, 1, 1);

        buttonDivide = new QPushButton(widget);
        buttonDivide->setObjectName("buttonDivide");
        buttonDivide->setMinimumSize(QSize(80, 80));
        buttonDivide->setMaximumSize(QSize(80, 80));
        buttonDivide->setFont(font);

        gridLayout->addWidget(buttonDivide, 1, 4, 1, 1);

        buttonFactorial = new QPushButton(widget);
        buttonFactorial->setObjectName("buttonFactorial");
        buttonFactorial->setMinimumSize(QSize(80, 80));
        buttonFactorial->setMaximumSize(QSize(80, 80));
        buttonFactorial->setFont(font);

        gridLayout->addWidget(buttonFactorial, 1, 5, 1, 1);

        button1 = new QPushButton(widget);
        button1->setObjectName("button1");
        button1->setMinimumSize(QSize(80, 80));
        button1->setMaximumSize(QSize(80, 80));
        button1->setFont(font);

        gridLayout->addWidget(button1, 2, 0, 1, 1);

        button2 = new QPushButton(widget);
        button2->setObjectName("button2");
        button2->setMinimumSize(QSize(80, 80));
        button2->setMaximumSize(QSize(80, 80));
        button2->setFont(font);

        gridLayout->addWidget(button2, 2, 1, 1, 1);

        button3 = new QPushButton(widget);
        button3->setObjectName("button3");
        button3->setMinimumSize(QSize(80, 80));
        button3->setMaximumSize(QSize(80, 80));
        button3->setFont(font);

        gridLayout->addWidget(button3, 2, 2, 1, 1);

        buttonPlus = new QPushButton(widget);
        buttonPlus->setObjectName("buttonPlus");
        buttonPlus->setMinimumSize(QSize(80, 80));
        buttonPlus->setMaximumSize(QSize(80, 80));
        buttonPlus->setFont(font);

        gridLayout->addWidget(buttonPlus, 2, 3, 1, 1);

        buttonMinus = new QPushButton(widget);
        buttonMinus->setObjectName("buttonMinus");
        buttonMinus->setMinimumSize(QSize(80, 80));
        buttonMinus->setMaximumSize(QSize(80, 80));
        buttonMinus->setFont(font);

        gridLayout->addWidget(buttonMinus, 2, 4, 1, 1);

        buttonPower = new QPushButton(widget);
        buttonPower->setObjectName("buttonPower");
        buttonPower->setMinimumSize(QSize(80, 80));
        buttonPower->setMaximumSize(QSize(80, 80));
        buttonPower->setFont(font);

        gridLayout->addWidget(buttonPower, 2, 5, 1, 1);

        button0 = new QPushButton(widget);
        button0->setObjectName("button0");
        button0->setMinimumSize(QSize(80, 80));
        button0->setMaximumSize(QSize(80, 80));
        button0->setFont(font);

        gridLayout->addWidget(button0, 3, 0, 1, 1);

        buttonDot = new QPushButton(widget);
        buttonDot->setObjectName("buttonDot");
        buttonDot->setMinimumSize(QSize(80, 80));
        buttonDot->setMaximumSize(QSize(80, 80));
        buttonDot->setFont(font);

        gridLayout->addWidget(buttonDot, 3, 1, 1, 1);

        buttonLbracket = new QPushButton(widget);
        buttonLbracket->setObjectName("buttonLbracket");
        buttonLbracket->setMinimumSize(QSize(80, 80));
        buttonLbracket->setMaximumSize(QSize(80, 80));
        buttonLbracket->setFont(font);

        gridLayout->addWidget(buttonLbracket, 3, 2, 1, 1);

        buttonRbracket = new QPushButton(widget);
        buttonRbracket->setObjectName("buttonRbracket");
        buttonRbracket->setMinimumSize(QSize(80, 80));
        buttonRbracket->setMaximumSize(QSize(80, 80));
        buttonRbracket->setFont(font);

        gridLayout->addWidget(buttonRbracket, 3, 3, 1, 1);

        buttonE = new QPushButton(widget);
        buttonE->setObjectName("buttonE");
        buttonE->setMinimumSize(QSize(80, 80));
        buttonE->setMaximumSize(QSize(80, 80));
        buttonE->setFont(font);

        gridLayout->addWidget(buttonE, 3, 4, 1, 1);

        buttonEqual = new QPushButton(widget);
        buttonEqual->setObjectName("buttonEqual");
        buttonEqual->setMinimumSize(QSize(80, 80));
        buttonEqual->setMaximumSize(QSize(80, 80));
        buttonEqual->setFont(font);

        gridLayout->addWidget(buttonEqual, 3, 5, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        button7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        button8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        button9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        buttonRemainder->setText(QCoreApplication::translate("Widget", "%", nullptr));
        buttonDel->setText(QCoreApplication::translate("Widget", "DEL", nullptr));
        buttonAC->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        button4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        button5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        button6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("Widget", "*", nullptr));
        buttonDivide->setText(QCoreApplication::translate("Widget", "/", nullptr));
        buttonFactorial->setText(QCoreApplication::translate("Widget", "!", nullptr));
        button1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        button2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        button3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        buttonPlus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        buttonMinus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        buttonPower->setText(QCoreApplication::translate("Widget", "^", nullptr));
        button0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        buttonDot->setText(QCoreApplication::translate("Widget", ".", nullptr));
        buttonLbracket->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
        buttonRbracket->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
        buttonE->setText(QCoreApplication::translate("Widget", "e/E", nullptr));
        buttonEqual->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
