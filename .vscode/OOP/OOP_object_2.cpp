#include <iostream>
using namespace std;
// 无参构造，有参构造

// 普通构造和拷贝构造
class person
{
public:
    int age;

    person()
    {
        cout << "无参数构造函数调用" << endl;
    }

    person(int a)
    {
        age = a;
        cout << "有参数构造函数调用" << endl;
    }

    // 拷贝构造函数
    person(const person &p)
    {
        cout << "拷贝构造函数" << endl;
        age = p.age;
    }

    ~person()
    {
        cout << "析构函数调用" << endl;
    }
};

// 调用
void test01()
{
    // 括号法
    person p1;     // 无参
    person p2(10); // 有参
    person p3(p2); // 拷贝
    cout << "p2 的年龄" << p2.age << endl;
    cout << "p3 的年龄" << p3.age << endl;

    // 显示法
    person p1;              // 无参
    person p2 = person(10); // 有参
    person p3 = person(p2); // 拷贝

    // person(10) 匿名对象
    // 不要用 person(p3);

    // 隐式转换法
    person p4 = 10;
}
int main()
{
    test01();
    return 0;
}