#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "a的地址是多少:" << &a << endl;
    cout << "p的值为:" << p << endl;

    // 解引用，即为a
    cout << "*p = " << *p << endl;

    // 指针的存储空间，32 为 4字节，64 为 8字节
    cout << sizeof(p) << endl;

    // 空指针不可访问
    // 初始化空指针
    int* p1 = NULL;

    //野指针 避免野指针
    return 0;
}