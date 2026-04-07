#include <iostream>
using namespace std;

/*
    1.public 类内可以访问，类外也可访问
    2.protected  类内可以访问，类外不能 ，但可以继承
    3.private  类内可以访问，类外不能，不能继承
*/
class person
{

public:
    string name;

protected:
    string car;

private:
    int password;

public:
    void func()
    {
        name = "zhangsan";
        car = "BMW";
        password = 114514;
    }
};

int main()
{

    person p1;
    p1.name = "lisi";
    // p1.car = "Benz"; 不可访问
    // p1.password = 666; 不可访问
    return 0;
}