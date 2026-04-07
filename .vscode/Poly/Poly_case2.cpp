#include <iostream>
using namespace std;

/* 利用多态 抽象制作饮品 ，提供子类制作咖啡和茶叶 */
/* 流程为，煮水，冲泡，倒入杯中，加入辅料*/

class Abstract_Making_drinks
{
public:
    /*虚函数*/
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee : public Abstract_Making_drinks
{
public:
    void Boil()
    {
        cout << " 正在执行煮水操作" << endl;
    }

    void Brew()
    {
        cout << " 正在执行冲泡操作" << endl;
    }

    void PourInCup()
    {
        cout << " 正在执行倒入杯中操作" << endl;
    }

    void PutSomething()
    {
        cout << " 正在执行添加东西操作" << endl;
    }
};

class Tea : public Abstract_Making_drinks
{
public:
    void Boil()
    {
        cout << " 正在执行煮水操作" << endl;
    }

    void Brew()
    {
        cout << " 正在执行冲泡操作" << endl;
    }

    void PourInCup()
    {
        cout << " 正在执行倒入杯中操作" << endl;
    }

    void PutSomething()
    {
        cout << " 正在执行添加东西操作" << endl;
    }
};

void doMake(Abstract_Making_drinks *abs)
{
    abs->makeDrink();
    delete abs; // 释放内存，防止泄露
}

void test01()
{
    doMake(new Coffee);

    cout << "---------" << endl;

    doMake(new Tea);
}

int main()
{
    test01();
    return 0;
}