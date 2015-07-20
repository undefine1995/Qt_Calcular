#include<QLayout>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLineEdit>
#include<cmath>
#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QLCDNumber>
#include"calculator.h"

Calculator::Calculator()
{

    num1=0;
    num2=0;
    result=0;
    zhenghao=true;
    mark=1;
    lineEditor=new QLineEdit("0");
    timer = new QTimer;
    lcdNumber1 = new QLCDNumber;
    lcdNumber2 = new QLCDNumber;
    lcdNumber3 = new QLCDNumber;
  //  lcdNumber = ui->lcdNumber;
    lcdNumber1->display(QTime::currentTime().hour());
    lcdNumber2->display(QTime::currentTime().minute());
    lcdNumber3->display(QTime::currentTime().second());
   // connect(timer, SIGNAL(timeout()), this, SLOT(timeChange()));
    timer->start(1000);
    S="";
    button_0=new QPushButton("0");
    button_1=new QPushButton("1");
    button_2=new QPushButton("2");
    button_3=new QPushButton("3");
    button_4=new QPushButton("4");
    button_5=new QPushButton("5");
    button_6=new QPushButton("6");
    button_7=new QPushButton("7");
    button_8=new QPushButton("8");
    button_9=new QPushButton("9");
    //button_dot=new QPushButton(".");
    button_sqrt=new QPushButton("sqrt");
    button_chengfang=new QPushButton("^");
    button_mod=new QPushButton("%");
    button_ce=new QPushButton("C");
    button_cheng=new QPushButton("*");
    button_jia=new QPushButton("+");
    button_jian=new QPushButton("-");
    button_chu=new QPushButton("/");
    button__=new QPushButton("+/-");
    button_pi=new QPushButton("π");
    button_dengyu=new QPushButton("=");
    QHBoxLayout *Hl1=new QHBoxLayout;
    QHBoxLayout *Hl2=new QHBoxLayout;
    QHBoxLayout *Hl3=new QHBoxLayout;
    QHBoxLayout *Hl4=new QHBoxLayout;
    QHBoxLayout *Hl5=new QHBoxLayout;
    QHBoxLayout *Hl6=new QHBoxLayout;
    QHBoxLayout *Hl7=new QHBoxLayout;
    Hl1->addWidget(lineEditor);
    Hl1->addWidget(button_ce);
    Hl2->addWidget(button_1);
    Hl2->addWidget(button_2);
    Hl2->addWidget(button_3);
    Hl2->addWidget(button_jia);
    Hl3->addWidget(button_4);
    Hl3->addWidget(button_5);
    Hl3->addWidget(button_6);
    Hl3->addWidget(button_jian);
    Hl4->addWidget(button_7);
    Hl4->addWidget(button_8);
    Hl4->addWidget(button_9);
    Hl4->addWidget(button_cheng);
    Hl5->addWidget(button__);
    Hl5->addWidget(button_0);
    Hl5->addWidget(button_pi);
    Hl5->addWidget(button_chu);
    Hl7->addWidget(lcdNumber1);
    Hl7->addWidget(lcdNumber2);
    Hl7->addWidget(lcdNumber3);
    Hl6->addWidget(button_sqrt);
    Hl6->addWidget(button_chengfang);
    Hl6->addWidget(button_mod);
    Hl6->addWidget(button_dengyu);
    QVBoxLayout *V1=new QVBoxLayout;

    V1->addLayout(Hl1);
    V1->addLayout(Hl2);
    V1->addLayout(Hl3);
    V1->addLayout(Hl4);
    V1->addLayout(Hl5);
    V1->addLayout(Hl6);
    V1->addLayout(Hl7);

    connect(timer, SIGNAL(timeout()), this, SLOT(timeChange()));

    connect(button_pi,SIGNAL(clicked()),this,SLOT(button_pi_clicked()));
    connect(button_0,SIGNAL(clicked()),this,SLOT(button_0_clicked()));
    connect(button_1,SIGNAL(clicked()),this,SLOT(button_1_clicked()));
    connect(button_2,SIGNAL(clicked()),this,SLOT(button_2_clicked()));
    connect(button_3,SIGNAL(clicked()),this,SLOT(button_3_clicked()));
    connect(button_4,SIGNAL(clicked()),this,SLOT(button_4_clicked()));
    connect(button_5,SIGNAL(clicked()),this,SLOT(button_5_clicked()));
    connect(button_6,SIGNAL(clicked()),this,SLOT(button_6_clicked()));
    connect(button_7,SIGNAL(clicked()),this,SLOT(button_7_clicked()));
    connect(button_8,SIGNAL(clicked()),this,SLOT(button_8_clicked()));
    connect(button_9,SIGNAL(clicked()),this,SLOT(button_9_clicked()));
//    connect(button_dot,SIGNAL(clicked()),this,SLOT(button_dot_clicked()));
//    connect(button_sqrt,SIGNAL(clicked()),this,SLOT(button_sqrt_clicked()));
    connect(button_chengfang,SIGNAL(clicked()),this,SLOT(button_chengfang_clicked()));
    connect(button_mod,SIGNAL(clicked()),this,SLOT(button_mod_clicked()));
    connect(button_jia,SIGNAL(clicked()),this,SLOT(button_jia_clicked()));
    connect(button_jian,SIGNAL(clicked()),this,SLOT(button_jian_clicked()));
    connect(button_cheng,SIGNAL(clicked()),this,SLOT(button_cheng_clicked()));
    connect(button_chu,SIGNAL(clicked()),this,SLOT(button_chu_clicked()));
    connect(button_dengyu,SIGNAL(clicked()),this,SLOT(button_dengyu_clicked()));
    connect(button_ce,SIGNAL(clicked()),this,SLOT(button_ce_clicked()));
    connect(button__,SIGNAL(clicked()),this,SLOT(button__clicked()));

    setLayout(V1);
}





void Calculator::timeChange()
{
    lcdNumber1->display(QTime::currentTime().hour());
    lcdNumber2->display(QTime::currentTime().minute());
    lcdNumber3->display(QTime::currentTime().second());
}


//    void button_dot_clicked(){
//     S+=".";
//     lineEditor->setText(S);
//    }
//    void button_sqrt_clicked(){

//    }
    void Calculator::button_chengfang_clicked(){
        S+="^";
         lineEditor->setText(S);
        zhenghao=true;
        fuhao='^';
        mark=2;
    }
    void Calculator::button_mod_clicked(){
        S+="%";
         lineEditor->setText(S);
        zhenghao=true;
        fuhao='%';
        mark=2;
    }

void Calculator::button_0_clicked()
{
    S+="0";
    lineEditor->setText(S);
    if(mark==1){
        num1=num1*10+0;
    }else{
        num2=num2*10;
    }
}

void Calculator::button_pi_clicked(){
    S+="π";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+3;
        }else{
            num1=num1*10-3;
        }
    }else{
        if(zhenghao){
            num2=num2*10+3;
        }else{
            num2=num2*10-3;
        }
    }
}

void Calculator::button_1_clicked(){
    S+="1";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+1;
        }else{
            num1=num1*10-1;
        }
    }else{
        if(zhenghao){
            num2=num2*10+1;
        }else{
            num2=num2*10-1;
        }
    }
}

void Calculator::button_2_clicked(){
    S+="2";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+2;
        }else{
            num1=num1*10-2;
        }
    }else{
        if(zhenghao){
            num2=num2*10+2;
        }else{
            num2=num2*10-2;
        }
    }
}

void Calculator::button_3_clicked(){
    S+="3";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+3;
        }else{
            num1=num1*10-3;
        }
    }else{
        if(zhenghao){
            num2=num2*10+3;
        }else{
            num2=num2*10-3;
        }
    }
}

void Calculator::button_4_clicked(){
    S+="4";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+4;
        }else{
            num1=num1*10-4;
        }
    }else{
        if(zhenghao){
            num2=num2*10+4;
        }else{
            num2=num2*10-4;
        }
    }
}

void Calculator::button_5_clicked(){
    S+="5";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+5;
        }else{
            num1=num1*10-5;
        }
    }else{
        if(zhenghao){
            num2=num2*10+5;
        }else{
            num2=num2*10-5;
        }
    }
}

void Calculator::button_6_clicked(){
    S+="6";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+6;
        }else{
            num1=num1*10-6;
        }
    }else{
        if(zhenghao){
            num2=num2*10+6;
        }else{
            num2=num2*10-6;
        }
    }
}

void Calculator::button_7_clicked(){
    S+="7";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+7;


        }else{
            num1=num1*10-7;
        }
    }else{
        if(zhenghao){
            num2=num2*10+7;
        }else{
            num2=num2*10-7;
        }
    }
}

void Calculator::button_8_clicked(){
    S+="8";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+8;
        }else{
            num1=num1*10-8;
        }
    }else{
        if(zhenghao){
            num2=num2*10+8;
        }else{
            num2=num2*10-8;
        }
    }
}

void Calculator::button_9_clicked(){
    S+="9";
    lineEditor->setText(S);
    if(mark==1){
        if(zhenghao){
            num1=num1*10+9;
        }else{
            num1=num1*10-9;
        }
    }else{
        if(zhenghao){
            num2=num2*10+9;
        }else{
            num2=num2*10-9;

        }
    }
}

void Calculator::button_jia_clicked(){
    S+="+";
     lineEditor->setText(S);
    zhenghao=true;
    fuhao='+';
    mark=2;
}

void Calculator::button_jian_clicked(){
    S+="-";
     lineEditor->setText(S);
    zhenghao=true;
    fuhao='-';
    mark=2;
}

void Calculator::button_cheng_clicked(){
    S+="*";
     lineEditor->setText(S);
    zhenghao=true;
    fuhao='*';
    mark=2;
}

void Calculator::button_chu_clicked(){
    S+="/";
     lineEditor->setText(S);
    zhenghao=true;
    fuhao='/';
    mark=2;
}

void Calculator::button__clicked(){
    S+="-";
     lineEditor->setText(S);
    zhenghao=false;
}

void Calculator::button_dengyu_clicked(){

    S+="=";
//     lineEditor->setText(S);

     switch(fuhao){
     case '+':result=num1+num2;break;
     case '-':result=num1-num2;break;
     case '*':result=num1*num2;break;
     case '/':if(num2) result=(float)num1/num2;break;
     case '^':result = pow(num1,num2);
     case '%':result = num1%num2;
     }
     int i=0;
     float result1=result;
     sprintf(a,"%.3f",result);
//     while(result1){
//         i++;
//         result1/=10;
//     }
//     for(;i;i--){
//         S+=(result/(int)pow(10,i-1)+'0');
//         result%=(int)pow(10,i-1);
//     }
     lineEditor->setText(a);
     zhenghao=true;
     num1=num2=0;
     mark=1;
     S="";
}

void Calculator::button_ce_clicked()

{
    zhenghao=false;
    S="";
    lineEditor->setText("0");
    num1=num2=0;
    mark=1;
}
