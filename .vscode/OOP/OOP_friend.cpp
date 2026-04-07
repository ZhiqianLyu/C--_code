#include <iostream>
using namespace std;

// 友元
class Building
{
    // 是building的好朋友，可以访问私有成员
    friend void goodGay(Building &build); // 全局函数
    friend class goodFriends;             // 类
    friend void goodFriends ::visit();    // 成员函数

public:
    Building()
    {
        m_livingroom = "客厅";
        m_bedroom = "卧室";
    }

    string m_livingroom;

private:
    string m_bedroom;
};

// 全局函数做友元
void goodGay(Building &build)
{
    cout << "全局函数访问 " << build.m_livingroom << endl;
    cout << "全局函数访问 " << build.m_bedroom << endl;
}

// 类做友元
class goodFriends
{
public:
    goodFriends();
    void visit();

    Building *building;
};

// 类外写成员函数
goodFriends ::goodFriends()
{
    // 创建建筑物对象
    building = new Building;
}

void goodFriends ::visit()
{
    cout << "好朋友正在访问" << building->m_livingroom << endl;
    cout << "好朋友正在访问" << building->m_bedroom << endl;
}

void test01()
{
    Building building;
    goodGay(building);
    goodFriends gf;
    gf.visit();
}

int main()
{
    test01();
    return 0;
}