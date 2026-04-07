#include <iostream>
using namespace std;

// 引用作为函数重载
void func(int &a) 
{
    cout << "func(int &a)的调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)的调用" << endl;
}

// 函数重载遇到默认参数
void func2(int a , int b = 10){
    cout << "func2(int a)的调用" << endl;
}

int main()
{

    int a = 10;
    func(a);// a 为变量

    func(10);// const int &a = 10 合法 为常量

    func2(10);//可能会导致二义性
    return 0;
}