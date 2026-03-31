#include <iostream>
using namespace std;

int main()
{
    // 数据类型 &别名 = 原名 都是一个东西
    // 引用必须初始化
    // 引用一旦初始化后就不可更改
    int a = 10;

    int &b = a;

    int c = 20;
    // int &b = c; 错误写法

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}