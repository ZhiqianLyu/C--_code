#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    string name;
    int id;
    int age;
    struct student stu; // 学生结构体
};

int main()
{
    teacher t;
    t.id = 10000;
    t.name = "wang";
    t.age = 60;
    t.stu.name = "zhangsan";
    t.stu.age = 20;
    t.stu.score = 100;

    cout << " 老师姓名 " << t.name << " 老师编号 " << t.id << " 老师的年龄 " << t.age
         << "\n 教的学生的姓名 " << t.stu.name << " 教的学生的年龄 " << t.stu.age << " 教的学生的成绩 " << t.stu.score;
    return 0;
}