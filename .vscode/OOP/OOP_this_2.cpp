#include <iostream>
using namespace std;

class person
{
public:
    person(int age)
    {
        // this 指向的是被调用的成员函数所属对象
        this->age = age;
    }
    int age;

    // 为什么返回引用  拷贝构造函数,不要用值传递, 地址传递，不会生成新的对象
    person &personAddAge(person &p)
    {
        this->age += p.age;
        return *this;
    }

    void showClassName()
    {
        cout << " this is name " << endl;
    }

    void showPersonAge()
    {
        if (this == NULL)
        {
            return;
        }
        cout << " age = " << this->age << endl;
    }
};

// 解决名称冲突

void test01()
{
    person p1(18);
    cout << "p1的年龄为 " << p1.age << endl;
}

void test02()
{
    person p1(10);

    person p2(10);
    p2.personAddAge(p1).personAddAge(p1);
    cout << "p2的age是: " << p2.age << endl;
}

// 空指针调用成员函数
void test03()
{
    person *p = NULL;

    p->showClassName();
    // p->showPersonAge();
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}