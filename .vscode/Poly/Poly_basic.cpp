#include <iostream>
using namespace std;

/*
要有多态 ：
首先要有继承 ，
其次子类要重写父类虚函数
父类的指针传入引用的对象
动态多态
*/

class Animal
{
public:
    virtual void speak()
    {
        cout << " 动物在说话" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << " 小猫在说话" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << " 小狗在说话" << endl;
    }
};

// 地址早绑定, 在编译阶段确定函数地址
// 地址晚绑定,
void doSpeak(Animal &animal) // Animal &animal = cat
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();
    return 0;
}