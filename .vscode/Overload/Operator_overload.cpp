#include <iostream>
using namespace std;

// 运算符重载
// 运算符也可以发生函数重载

// 加法重载
class person
{
public:
    int m_A;
    int m_B;
    // 1.成员函数重载+号
    // person operator+(person &p)
    // {
    //     person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_A + p.m_B;
    //     return temp;
    // }
};

// 2.全局函数重载
person operator+(person &p1, person &p2)
{
    person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_A + p2.m_B;
    return temp;
}

// 3.函数重载
person operator+(person &p1, int num)
{
    person temp;
    temp.m_A = p1.m_A + num;
    temp.m_B = p1.m_A + num;
    return temp;
}

void test01()
{
    person p1;
    p1.m_A = 10;
    p1.m_B = 20;
    person p2;
    p2.m_A = 30;
    p2.m_B = 40;

    person p3 = p1 + p2;
    person p4 = p1 + 10;
    cout << "p3 A的值 " << p3.m_A << " p3 B的值 " << p3.m_B << endl;
    cout << "p4 A的值 " << p4.m_A << " p4 B的值 " << p4.m_B << endl;
}

int main()
{
    test01();
    return 0;
}