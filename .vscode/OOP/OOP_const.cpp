#include <iostream>
using namespace std;

class person
{
public:
    void showPerson() const
    {
        // m_A = 100; 报错 ，const 不允许修改
        this->m_B = 100;
    }
    int m_A;
    mutable int m_B;

    void func()
    {
    }
};

void test01()
{
    person p;
    p.showPerson();
}

// 常对象
void test02()
{
    const person p{};
    // p.m_A =100; // 不可修改
    p.m_B = 100;

    // 常对象只能调用常含数
    p.showPerson();
    // p.func(); 不可调用普通函数
}
int main()
{

    test01();
    test02();
    return 0;
}