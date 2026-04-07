#include <iostream>
#include <cmath>
using namespace std;

/*判断点是否在圆内*/

class Circle
{
public:
    void set_Circle_Info(int x, int y, int r)
    {
        c_x = x;
        c_y = y;
        c_r = r;
    }

    int get_circle_x()
    {
        return c_x;
    }

    int get_circle_y()
    {
        return c_y;
    }

    int get_circle_r()
    {
        return c_r;
    }

private:
    int c_r;
    // 圆心
    int c_x;
    int c_y;
};

class Point
{
public:
    void set_point_info(int x, int y)
    {
        p_x = x;
        p_y = y;
    }

    int get_point_x()
    {
        return p_x;
    }

    int get_point_y()
    {
        return p_y;
    }

private:
    int p_x;
    int p_y;
};

bool isInCircle(Circle &c, Point &p)
{
    double d = sqrt(pow(c.get_circle_x() - p.get_point_x(), 2) + pow(c.get_circle_y() - p.get_point_y(), 2));
    if (c.get_circle_r() >= d)
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
    Circle c;
    Point p;

    c.set_Circle_Info(0, 0, 3);

    p.set_point_info(0, 3);

    cout << "是否在圆圈上(里）" << isInCircle(c, p) << endl;
    return 0;
}