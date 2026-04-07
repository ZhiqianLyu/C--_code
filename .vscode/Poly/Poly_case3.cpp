#include <iostream>
using namespace std;

/*
    案例描述：
    组装电脑, cpu,显卡，内存条
    抽象出零件父类，提供不同厂商
    创建电脑类，调用接口
    组装三台不同电脑，并测试
*/

// CPU 类
class CPU
{
public:
    virtual void calculate() = 0;
    virtual ~CPU() {} // 只要有虚函数，必加虚析构！
};

// 显卡类
class RTX
{
public:
    virtual void display() = 0;
    virtual ~RTX() {}
};

// 内存类
class RAM
{
public:
    virtual void storage() = 0;
    virtual ~RAM() {}
};

// 电脑类
class Computer
{
public:
    // 父类变量无法直接存放子类对象，但父类指针可以指向子类对象
    Computer(CPU *cpu, RTX *rtx, RAM *ram)
    {
        m_cpu = cpu;
        m_rtx = rtx;
        m_ram = ram;
    }

    // 工作函数
    void work()
    {
        m_cpu->calculate();
        m_rtx->display();
        m_ram->storage();
    }

    // 析构函数
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }

        if (m_rtx != NULL)
        {
            delete m_rtx;
            m_rtx = NULL;
        }

        if (m_ram != NULL)
        {
            delete m_ram;
            m_ram = NULL;
        }
    }

private:
    CPU *m_cpu;
    RTX *m_rtx;
    RAM *m_ram;
};

// 具体厂商
// intel
class IntelCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "intel CPU 正在计算 " << endl;
    }
};

class IntelRTX : public RTX
{
public:
    virtual void display()
    {
        cout << "intel RTX 正在使用 " << endl;
    }
};

class IntelRAM : public RAM
{
public:
    virtual void storage()
    {
        cout << "intel RAM 正在记忆 " << endl;
    }
};

// AMD
class AMDCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "AMD CPU 正在计算 " << endl;
    }
};

class AMDRTX : public RTX
{
public:
    virtual void display()
    {
        cout << "AMD RTX 正在使用 " << endl;
    }
};

class AMDRAM : public RAM
{
public:
    virtual void storage()
    {
        cout << "AMD RAM 正在记忆 " << endl;
    }
};

// 组装
void test01()
{
    cout << "第一台" << endl;
    // 第一台零件
    CPU *f_CPU = new AMDCPU;
    RTX *f_RTX = new IntelRTX;
    RAM *f_RAM = new AMDRAM;

    // 第一台电脑
    Computer *c1 = new Computer(f_CPU, f_RTX, f_RAM);
    c1->work();
    delete c1;

    cout << "-------" << endl;
    cout << "第二台" << endl;
    // 第二台零件
    f_CPU = new IntelCPU;
    f_RTX = new IntelRTX;
    f_RAM = new IntelRAM;

    // 第二台电脑
    Computer *c2 = new Computer(f_CPU, f_RTX, f_RAM);
    c2->work();
    delete c2;
}

int main()
{
    test01();
    return 0;
}