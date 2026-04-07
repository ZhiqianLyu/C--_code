#include <iostream>
using namespace std;

// 初始化列表
class person
{
public:
    // person(int a, int b, int c)
    // {
    //     p_A = a;
    //     p_B = b;
    //     p_C = c;
    // }

    // 初始化列表
    person(int a, int b, int c) : p_A(a), p_B(b), p_C(c)
    {
    }

    int p_A;
    int p_B;
    int p_C;
};

void test01()
{
    person p(30, 20, 10);
    cout << "A 是 " << p.p_A << endl;
    cout << "B 是 " << p.p_B << endl;
    cout << "C 是 " << p.p_C << endl;
}

int main()
{
    test01();
    return 0;
}