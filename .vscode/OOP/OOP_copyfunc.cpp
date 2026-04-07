#include <iostream>
using namespace std;

/*
    深拷贝/浅拷贝
    浅拷贝 : 简单赋值操作   问题:堆区内存重复释放
    深拷贝： 在堆区重新申请空间，拷贝
*/

class person
{
public:
    int p_age;
    int *p_Height;

    person()
    {
        cout << "person 默认构造函数" << endl;
    }

    person(int age, int height)
    {
        p_age = age;
        p_Height = new int(height);
        cout << "person 有参构造函数" << endl;
    }

    ~person()
    {
        // 将堆区数据释放
        if (p_Height != NULL)
        {
            delete[] p_Height;
            p_Height = NULL;
        }
        cout << "person 的析构函数" << endl;
    }

    // 深拷贝操作
    person(const person &p)
    {

        cout << "person 拷贝构造函数" << endl;
        p_age = p.p_age;
        // 创建一个新的内存，用于释放
        p_Height = new int(*p.p_Height);
    }
};

void test01()
{
    person p1(18, 160);
    cout << "p1的年龄为 :" << p1.p_age << "身高为:" << *p1.p_Height << endl;

    person p2(p1); // 浅拷贝
    cout << "p2的年龄为 :" << p2.p_age << "身高为:" << *p2.p_Height << endl;
}

int main()
{

    test01();

    return 0;
}