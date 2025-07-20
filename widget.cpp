#include "widget.h"
#include "ui_widget.h"
#include "calculator_manager.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("计算器");

    //连接信号与槽，实现回车等效于按下等于号
    connect(ui->screen, SIGNAL(returnPressed()), this, SLOT(on_buttonEqual_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_button0_clicked()
{
    // 如果用户输入有误则不对用户之后的第一次输入做出回应，避免对报错提示进行编辑
    if(!ui->screen->text().startsWith("用")){
        // 光标位置
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "0");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();  // 确保QLineEdit获得焦点
}

void Widget::on_button1_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "1");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}



void Widget::on_button2_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "2");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button3_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "3");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button4_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "4");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button5_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "5");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button6_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "6");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button7_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "7");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button8_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "8");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_button9_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "9");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}

void Widget::on_buttonE_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "e");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}

void Widget::on_buttonDot_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, ".");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonLbracket_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "(");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonRbracket_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, ")");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonPlus_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "+");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonMinus_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "-");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonMultiply_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "*");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonDivide_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "/");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonDel_clicked()
{
    int pos = ui->screen->cursorPosition();
    if(inputText.size()>0 && !ui->screen->text().startsWith("用")){
        if(pos>0){
            inputText.remove(pos-1, 1);
        }
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonAC_clicked()
{
    inputText.clear();
    ui->screen->clear();
    ui->screen->setFocus();
}


void Widget::on_buttonEqual_clicked()
{
    QString str = "";
    str = calculatorManager.getInput(ui->screen->text().toStdString());
    // 如果用户输入有问题，保留上一个无问题的计算结果
    if(!str.startsWith("用")){
        inputText = str;
    }
    ui->screen->setText(str);
    ui->screen->setFocus();
}



void Widget::on_buttonRemainder_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "%");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonFactorial_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "!");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}


void Widget::on_buttonPower_clicked()
{
    if(!ui->screen->text().startsWith("用")){
        int pos = ui->screen->cursorPosition();
        inputText.insert(pos, "^");
    }
    ui->screen->setText(inputText);
    ui->screen->setFocus();
}

