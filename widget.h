#ifndef WIDGET_H
#define WIDGET_H

#include "calculator_manager.h"

#include <QShortcut>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_button1_clicked();

    void on_button0_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_buttonDot_clicked();

    void on_buttonLbracket_clicked();

    void on_buttonRbracket_clicked();

    void on_buttonPlus_clicked();

    void on_buttonMinus_clicked();

    void on_buttonMultiply_clicked();

    void on_buttonDivide_clicked();

    void on_buttonDel_clicked();

    void on_buttonAC_clicked();

    void on_buttonEqual_clicked();

    void on_buttonE_clicked();

    void on_buttonRemainder_clicked();

    void on_buttonFactorial_clicked();

    void on_buttonPower_clicked();

private:
    Ui::Widget *ui;
    QString inputText;
    CalculatorManager calculatorManager;
};
#endif // WIDGET_H
