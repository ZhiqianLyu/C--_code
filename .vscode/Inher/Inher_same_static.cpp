#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Base_func调用 " << endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son_func调用" << endl;
    }
};
int Son ::m_A = 200;

// 同名静态成员属性
void test01()
{
    Son s;
    // 1. 通过对象访问
    cout << "son m_A " << s.m_A << endl;
    cout << "base m_A " << s.Base::m_A << endl;

    // 2. 通过类名访问
    cout << "通过类名访问 " << endl;
    cout << "son m_A" << Son::m_A << endl;
    cout << "base m_A " << Son::Base::m_A << endl;
}

// 同名静态成员函数
void test02()
{
    Son s;
    s.func();
    s.Base::func();

    cout << " 用类名访问 :" << endl;
    Son::func();
    Son::Base::func();
}

int main()
{
    test01();
    test02();
    return 0;
}