#include <iostream>
using namespace std;

struct student
{

    string name;
    int age;
    int score;
};

int main()
{

    // 结构体数组
    struct student stuarr[3] = {
        {"zhangsan", 18, 99},
        {"lisi", 20, 55},
        {"wangwu", 100, 80}};

    // 元素赋值
    stuarr[2].name = "赵六";
    stuarr[2].age = 70;
    stuarr[2].score = 60;

    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << stuarr[i].name
             << "年龄：" << stuarr[i].age
             << "分数：" << stuarr[i].score;
    }

    return 0;
}