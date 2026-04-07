#include <iostream>
using namespace std;

// 普通实现
// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页，登录， 注册" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作" << endl;
//     }
//     void left()
//     {
//         cout << "java,python,c++" << endl;
//     }
//     void content()
//     {
//         cout << "java 视频" << endl;
//     }
// };

// 继承实现页面
// 减少重复代码
// 语法 : class 子类 ： 继承方式 父类;
// 公共页面
class Basepage
{
public:
    void header()
    {
        cout << "首页，登录， 注册" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作" << endl;
    }
    void left()
    {
        cout << "java,python,c++" << endl;
    }
};

// java 页面
class Java : public Basepage
{
public:
    void content()
    {
        cout << "java 视频" << endl;
    }
};
// python 页面
class Python : public Basepage
{
public:
    void content()
    {
        cout << "python 视频" << endl;
    }
};
// C++ 页面
class Cpp : public Basepage
{
public:
    void content()
    {
        cout << "c++ 视频" << endl;
    }
};

void test01()
{
    cout << "java 页面" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "-------------" << endl;

    cout << "python 页面" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();

    cout << "-------------" << endl;

    cout << "c++ 页面" << endl;
    Cpp cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main()
{
    test01();
    return 0;
}