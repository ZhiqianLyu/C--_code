#include <iostream>
using namespace std;

// 构造时先构造其他类，在构造主类
// 析构时先析构主类，在析构其他类

// 手机类
class phone
{
public:
    phone(string name)
    {
        cout << "phone 调用" << endl;
        p_name = name;
    }

    ~phone()
    {
        cout << "phone 的析构函数调用" << endl;
    }

    string p_name;
};

// 人类
class person
{
public:
    person(string name, string p_name) : r_name(name), m_phone(p_name)
    {
        cout << "perosn 调用" << endl;
    }

    ~person()
    {
        cout << "person 的析构函数调用" << endl;
    }
    string r_name;
    phone m_phone;
};

void test01()
{
    person p("张三", "Huawei");
    cout << "name :" << p.r_name << " phone name :" << p.m_phone.p_name << endl;
}

int main()
{
    test01();
}