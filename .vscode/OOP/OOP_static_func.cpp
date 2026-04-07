#include <iostream>
using namespace std;

class person
{

public:
    static void func()
    {
        m_A = 100; // 静态成员函数可以访问静态成员变量 
        // m_B = 200;          //但不可以访问非静态成员变量
        cout << "静态函数调用" << endl;
    }

    static int m_A;
    int m_B;

    // 也有权限限制，私有无法访问
};
int person ::m_A = 0;

void test01()
{
    // 通过对象访问
    person p;
    p.func();

    // 通过类名访问
    person::func();
}

int main()
{
    test01();
    return 0;
}
