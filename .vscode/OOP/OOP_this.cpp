#include <iostream>
using namespace std;

class person
{
    int m_A;        // 非静态成员变量 属于类的对象
    static int m_B; // 静态成员变量，不属于类的对象

    void func() {} // 非静态成员函数,不属于类的对象
};

int person :: m_B = 0;
void test01()
{
    person p;
    // 空对象占用内存空间为1
    // C++编译器会分配一个字节空间，为了区分空对象占内存的位置
    // 每个空对象应有一个独一无二的空间
    cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
    person p2;
    // 为4 看类内的字节
    cout << "size of p = " << sizeof(p2) << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}