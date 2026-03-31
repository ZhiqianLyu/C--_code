#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

// 值传递
void PrintStudent(struct student s)
{
    s.age = 100; // 只改变子函数的值
    cout << "子函数中 姓名" << s.name << " " << s.age << " " << s.score << endl;
}

// 地址传递
void PrintStudent2(struct student *p)
{
    p->age = 90; // 会修改主函数的值
    cout << "子函数2中的姓名" << p->name << " " << p->age << " " << p->score << endl;
}

int main()
{

    struct student s;
    s.name = "zhangsan";
    s.age = 20;
    s.score = 89;

    cout << "前一个main : " << s.name << " " << s.age << " " << s.score << endl;
    PrintStudent(s);
    PrintStudent2(&s);
    cout << "经过了改参后的main : " << s.name << " " << s.age << " " << s.score << endl;

    return 0;
}