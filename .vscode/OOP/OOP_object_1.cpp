#include <iostream>
using namespace std;

// 1.析构函数 进行初始化操作
class person
{
public:
    /*
        构造函数
        没有返回值
        函数名与类名相同
        构造函数可以有参数，可以发生重载
        创建对象，析构函数会自动调用，且调用一次
    */

    person()
    {
        cout << "构造函数的调用" << endl;
    }

    /*
        析构函数
        没有返回值
        函数名字和类名一致，但得加~
        不能有参数，不可以重载
        对象在销毁前会自动调用析构函数，且只调用一次
    */
    ~person()
    {
        cout << "构造函数的调用" << endl;
    }
};

void test01() // 在栈的数据 test01执行完毕，会释放对象
{
    person p;
}
int main()
{
    test01();
    return 0;
}