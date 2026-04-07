#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base_func 调用: " << endl;
    }

    void func(int a)
    {
        cout << "Base_func(a) 调用: " << endl;
    }

    int m_A;
};

class son : public Base
{
public:
    son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "son_func 调用: " << endl;
    }

    // void func(int a)
    // {
    //     cout << "son_func(a) 调用: " << endl;
    // }

    int m_A;
};

void test01()
{
    son s;
    cout << "Son m_A = " << s.m_A << endl;       // 200
    cout << "Base m_A =" << s.Base::m_A << endl; // 需要加一个作用域
}

void test02()
{
    son s;
    s.func();
    s.Base::func(); // 想要访问父类的重载函数得加作用域
    s.Base::func(100);
}

int main()
{
    test01();
    test02();
    return 0;
}