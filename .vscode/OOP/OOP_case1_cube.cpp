#include <iostream>
using namespace std;
/*
    设置一个cube,求立方体面积和体积，
    利用全局函数和成员函数判断两个立方体是否相等
*/

class Cube
{
public:
    // 设置长度
    void setLength(int len)
    {
        c_length = len;
    }
    // 读出长度
    int get_Length()
    {
        return c_length;
    }

    // 设置高度
    void setHeight(int high)
    {
        c_height = high;
    }
    // 读出高度
    int get_Height()
    {
        return c_height;
    }
    // 设置宽度
    void setWeight(int wei)
    {
        c_weight = wei;
    }
    // 读出长度
    int get_Weighth()
    {
        return c_weight;
    }

    int Area()
    {
        return (c_height * c_length + c_height * c_weight + c_length * c_weight) * 2;
    }

    int vol()
    {
        return c_height * c_length * c_weight;
    }

    // 成员函数判断
    bool isSame_class(Cube &c2)
    {
        if (c_height == c2.get_Height() && c_length == c2.get_Length() && c_weight == c2.get_Weighth())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    int c_length;
    int c_height;
    int c_weight;
};

// 利用全局函数判断，是否相等
bool isTrue(Cube &c1, Cube &c2)
{
    if (c1.get_Height() == c2.get_Height() && c1.get_Length() == c2.get_Length() && c1.get_Weighth() == c2.get_Weighth())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cube c1;
    c1.setLength(10);
    c1.setHeight(20);
    c1.setWeight(30);

    cout << c1.Area() << endl;
    cout << c1.vol() << endl;

    Cube c2;
    c2.setLength(10);
    c2.setHeight(20);
    c2.setWeight(31);

    cout << isTrue(c1, c2) << endl;
    cout << c1.isSame_class(c2) << endl;
    return 0;
}