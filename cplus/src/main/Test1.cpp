//
// Created by joybar on 2019-03-13.
//

#include <iostream>



using namespace std;
// 函数声明
int funcTest();
int funcTestChangLiang1();
int funcTestChangLiang2();

/**
 *
 */
extern int i;  //声明i而非定义

// 全局变量声明
int j;         //声明并定义i


// 定义常量
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'



int main() {
    cout << "Hello world, C++!" << endl;

    // 函数调用
    funcTest();

    funcTestChangLiang1();
    funcTestChangLiang2();


    return 0;
}

// 函数定义
int funcTest() {
    // 局部变量声明并初始化
    int a = 10;
    int b = 20;
    int c = a + b;
    cout << c << endl;
    return 0;
}

int funcTestChangLiang1() {
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}

int funcTestChangLiang2() {
    const int  LENGTH1 = 10;
    const int  WIDTH1  = 5;
    const char NEWLINE1= '\n';
    int area;

    area = LENGTH1 * WIDTH1;
    cout << area;
    cout << NEWLINE1;
    return 0;
}
