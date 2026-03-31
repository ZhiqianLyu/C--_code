#include <iostream>
using namespace std;

void showValue(const int &val)
{
    // val = 100; 错误， 防止误操作
    cout << "val = " << val << endl;
}

int main()
{
    // 常量引用，
    // 使用场景用来修饰形参

    // const int &ref = 10; // 引用一块合法内存
    //  ref = 20; 只读不可修改

    int a = 100;
    showValue(a);
    return 0;
}