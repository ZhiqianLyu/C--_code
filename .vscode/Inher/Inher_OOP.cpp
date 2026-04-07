#include <iostream>
using namespace std;

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;
};

void test01()
{
    cout << "父类大小 " << sizeof(Base) << endl; // 12
    cout << "子类大小 " << sizeof(Son) << endl;  // 16 继承的加自己的
}

int main()
{
    test01();
    return 0;
}