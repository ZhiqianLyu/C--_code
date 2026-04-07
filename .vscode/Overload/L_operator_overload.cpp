#include <iostream>
using namespace std;

class person
{
public:
    person(int a, int b)
    {
        int a = m_A;
        int b = m_B;
    }
    friend ostream &operator<<(ostream &cout, person &p);

private:
    int m_A;
    int m_B;
};

// 不使用成员变量
// 用全局变量
ostream &operator<<(ostream &cout, person &p)
{
    cout << "m_A = " << p.m_A << " m_b = " << p.m_B << endl;
    return cout;
}

void test01()
{
    person p(10, 20);
    // p.m_A = 10;
    // p.m_B = 20;
    cout << p << endl;
}

int main()
{
    test01();
    return 0;
}