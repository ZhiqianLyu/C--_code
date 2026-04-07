#include <iostream>
using namespace std;

// 静态成员变量
class person
{
public:
    // 1 所有对象共享同一份数据
    // 2.编译阶段分配内存
    // 3.类内声明，类外初始化
    static int m_A;

    // 有权限限制
private:
    static int m_B;
};

int person::m_A = 100;

void test01()
{
    // 1.通过对象访问
    person p;
    cout << p.m_A << endl;

    person p2;
    p2.m_A = 200;
    cout << p2.m_A << endl;
    cout << p.m_A << endl;
}

void test02()
{
    /*
        静态成员变量，不属于某个对象，所有对象共享一份数据
        1.通过对象访问
        2.通过类名访问
    */
    // 通过类名
    cout << person ::m_A << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}