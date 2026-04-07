#include <iostream>
using namespace std;

// 不常用

class Person
{
public:
    string _name;
};
// 虚继承 virtual
class Student : virtual public Person
{
protected:
    int _num; // 学号
};
class Teacher : virtual public Person
{
protected:
    int _id; // 职工编号
};
class Assistant : public Student, public Teacher
{
protected:
    string _majorCourse; // 主修课程
};
int main()
{
    Assistant a;
    a.Student::_name = "John"; // 通过虚拟继承，只有一份_name，避免了二义性
    a.Teacher::_name = "Kian";

    cout << a._name << endl;
    return 0;
}