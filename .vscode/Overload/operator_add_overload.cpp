#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger mi);

public:
    MyInteger()
    {
        m_num = 0;
    }

    // 重载前置++运算符
    MyInteger &operator++()
    {
        m_num++;
        return *this;
    }
    // 重载后置++运算符
    //  int 为占位参数用于区分前置后置
    MyInteger operator++(int)
    {
        // 先返回
        MyInteger temp = *this;
        // 后递增
        m_num++;
        // 返回结果
        return temp;
    }

private:
    int m_num;
};

// 重载左移运算符
ostream &operator<<(ostream &cout, MyInteger mi)
{

    cout << mi.m_num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++myint << endl;
}

void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}