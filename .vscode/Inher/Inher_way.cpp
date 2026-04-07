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

class pub : public Base
{
public:
    void func()
    {
        m_A = 10; // 父类中 公共权限成员 到子类依然是公共权限
        m_B = 20; // 父类中 保护权限成员 到子类也是保护权限
        // m_C = 30;  父类中的私有成员 子类无法访问
    }
};

class protect : protected Base
{
public:
    void func()
    {
        m_A = 10; // 父类中 公共权限成员 到子类是保护权限
        m_B = 20; // 父类中 保护权限成员 到子类也是保护权限
        // m_C = 30;  父类中的私有成员 子类无法访问
    }
};

class pri : private Base
{
public:
    void func()
    {
        m_A = 10; // 父类中 公共权限成员 到子类是私有权限
        m_B = 20; // 父类中 保护权限成员 到子类是私有权限
        // m_C = 30;  父类中的私有成员 子类无法访问
    }
};

class grandSon : public pri
{
public:
    void func()
    {
        // m_A = 100; 已经是私有
    }
};

void test01()
{
    pub p1;
    p1.m_A = 100;
    // p1.m_B = 100; 变为保护权限成员无法访问
}

void test02()
{
    protect p2;
    // p2.m_A =100;
    // p2.m_B = 100; 全为保护权限
}

void test03()
{
    pri p3;
    // p3.m_A = 100; 权威私有成员
}

// 继承方式 公共继承 保护继承 私有继承
int main()
{
    test01();
    test02();
    test03();
    return 0;
}