#include <iostream>
using namespace std;
// 封装一个圆的类
const double PI = 3.14;

class Circle
{
    // 访问权限
    // 公共权限
public:
    // 属性
    //  半径
    int c_r;

    // 行为
    //  获取圆的周长
    double calculate()
    {
        return 2 * PI * c_r;
    }
};

int main()
{

    // 创建具体圆 的 对象
    // 实例化
    Circle c1;
    c1.c_r = 30;

    cout << "圆的周长为：" << c1.calculate() << endl;

    return 0;
}