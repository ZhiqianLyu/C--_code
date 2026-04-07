#include <iostream>
using namespace std;

// 函数重载 提高复用性
/*
    重载满足条件：
    1.在同一个作用域下
    2.函数名称相同
    3.函数参数类型不同，或者个数不同，顺序不同
    4.函数的返回值不可以做为函数重载的条件
*/

void func()
{
    cout << "第一个func" << endl;
}

void func(int a)
{
    cout << "第二个func!!!" << endl;
}

void func(double a, int b)
{
    cout << "第三个func!!!" << endl;
}

void func(int b, double a)
{
    cout << "第四个func!!!" << endl;
}

int main()
{
    func();
    func(10);
    func(3.14, 10);
    func(10, 3.14);
    return 0;
}