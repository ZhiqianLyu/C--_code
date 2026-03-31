#include <iostream>
using namespace std;

int main()
{
    // 1. 常量指针 const int* p = &a;
    /*指针对指向可以修改，但是指向的值不可以改*/

    int a = 10;
    int b = 20;
    const int *p = &a;
    // 错误 ：p = 20;
    cout << "改之前:" << *p << endl;

    p = &b;
    cout << "改之后:" << *p << endl;

    cout << "------------" << endl;

    // 2. 指针常量 int* const p = &a
    /*指针的指向不可以改，指针指向的值可以改*/
    int *const p1 = &a;
    cout << "改之前:" << *p1 << endl;
    *p1 = 20;
    // 错误 p1 = &b;
    cout << "改之后:" << *p1 << endl;

    // 3.指向常量的常量指针 const int * const p2 = &a;
    /*什么都不能改*/
    const int *const p2 = &a;
    cout << "常量指针常量:" << *p2 << endl;
    return 0;
}