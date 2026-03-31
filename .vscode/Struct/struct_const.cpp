#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void printStudents(const student *s) // 使用指针 节省内存 占用八字节
{
    // s->age = 150; 加入const 只读不写； 防止函数误操作
    cout << "姓名：" << s->name << " " << s->age << " " << s->score << endl;
}
int main()
{

    struct student s = {"zhangsan", 14, 60};

    // 通过函数打印结构体变量信息
    printStudents(&s);
    return 0;
}