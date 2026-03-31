#include <iostream>
using namespace std;

struct Student_struct
{
    // 成员列表

    // 姓名,年龄,分数
    string name;
    int age;
    int score;
};

// 创建学生类型
/*
    1. struct Student_struct s1
    2. struct Student s2 = {..}
    3.
*/
int main()
{
    struct Student_struct s1; // struct 可省略
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "名字是：" << s1.name << s1.age << s1.score;

    return 0;
}