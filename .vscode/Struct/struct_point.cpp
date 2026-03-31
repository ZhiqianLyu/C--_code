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
    struct student s = {"zhangsan", 18, 20};

    student *p = &s;

    cout << "姓名：" << p->name
         << " age:" << p->age
         << "score" << p->score;

    return 0;
}