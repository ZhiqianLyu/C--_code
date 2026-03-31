#include <iostream>
using namespace std;

// 值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = a;
}

// 地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    // 让形参修改实参
    int a = 10;
    int b = 20;

    // mySwap01(a, b);
    // mySwap02(&a, &b);
    mySwap03(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}