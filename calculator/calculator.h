#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<QApplication>
#include<QDialog>
#include<QPushButton>
#include<QLineEdit>
#include<string.h>
#include<stdio.h>
#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QLCDNumber>

class Calculator:public QDialog
{
    Q_OBJECT
protected:
    QLineEdit *lineEditor;
    QPushButton *button_0;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_pi;
    QLineEdit *time;
    QPushButton *button_sqrt;
    QPushButton *button_chengfang;
    QPushButton *button_mod;
    QPushButton *button_ce;
    QPushButton *button_jia;
    QPushButton *button_jian;
    QPushButton *button_cheng;
    QPushButton *button_chu;
    QPushButton *button__;
    QPushButton *button_dengyu;
    QTimer * timer;
    QLCDNumber * lcdNumber1;
    QLCDNumber * lcdNumber2;
    QLCDNumber * lcdNumber3;

    int num1,num2;
    float result;   //标记第一个数，第二个数和结果
    bool zhenghao;      //数字前面的正负号
    int mark;       //标记是第一个还是第二个数字
    char fuhao;     //运算符号
    QString S;      //显示的字符串
    char a[100];
public:

    Calculator();
private slots:
    void timeChange();
    void button_0_clicked();
    void button_1_clicked();
    void button_2_clicked();
    void button_3_clicked();
    void button_4_clicked();
    void button_5_clicked();
    void button_6_clicked();
    void button_7_clicked();
    void button_8_clicked();
    void button_9_clicked();
    void button_pi_clicked();
    void button_chengfang_clicked();    void button_mod_clicked();
    void button_ce_clicked();
    void button_jia_clicked();
    void button_jian_clicked();
    void button_cheng_clicked();
    void button_chu_clicked();
    void button__clicked();
    void button_dengyu_clicked();
};


#endif // CALCULATOR_H




