#include <iostream>
using namespace std;

class Student
{
public:
    // 类 属性 成员属性 成员变量
    // 行为 成员函数 成员方法
    // 属性 姓名学号
    string studentName;
    string studentId;

    // 行为
    void PrintInfo(string name, string studentId)
    {
        cout << "学生的姓名是：" << name << "\n学生的学号的是:" << studentId << endl;
    }

    // 给姓名赋值
    void setName(string name)
    {
        studentName = name;
    }
};

int main()
{
    // 实例化
    Student s;
    s.studentName = "zhangsan";
    s.studentId = "1506227802";

    s.PrintInfo(s.studentName, s.studentId);

    return 0;
}