#include <iostream>
using namespace std;

int &test01()
{
    // 函数调用可以作为左值
    // 引用与指针常量差不多 ， 指向不可修改
    static int a = 10; // 静态变量 ，存放在全局区，程序结束后释放
    return a;
}

int main()
{
    int &ref = test01();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    test01() = 100;
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;
    return 0;
}