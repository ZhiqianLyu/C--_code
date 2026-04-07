#include <iostream>
using namespace std;

/*
    实现一个计算器类,利用多态技术

    多态好处，
    组织结构清晰，
    可读性强，
    可维护性高

*/

// 抽象类
class Calculator
{
public:
    virtual double getResult()
    {
        return 0;
    }

    double num1;
    double num2;
};

// 加法
class Add : public Calculator
{
public:
    double getResult()
    {
        return num1 + num2;
    }
};

// 减法
class Min : public Calculator
{
public:
    double getResult()
    {
        return num1 - num2;
    }
};

// 乘法
class mul : public Calculator
{
public:
    double getResult()
    {
        return num1 * num2;
    }
};

// 除法
class Divide : public Calculator
{
public:
    double getResult()
    {
        return num1 / num2;
    }
};

void test01()
{
    // 多态使用条件

    Calculator *abc = new Add;
    abc->num1 = 10;
    abc->num2 = 20;

    cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;

    delete abc;
    abc = new Min;
    abc->num1 = 10;
    abc->num2 = 20;

    cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;

    delete abc;
    abc = new Divide;
    abc->num1 = 10;
    abc->num2 = 1.1;

    cout << abc->num1 << " / " << abc->num2 << " = " << abc->getResult() << endl;
}

int main()
{
    test01();
    return 0;
}