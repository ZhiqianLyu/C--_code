#include <iostream>
using namespace std;
// 在私有类中设置权限
class person
{
public:
    void setName(string name)
    {
        p_Name = name;
    }
    string getName()
    {
        return p_Name;
    }
    int getAge()
    {
        return p_Age;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << " 赋值失败，年龄有误" << endl;
        }
        else
        {
            p_Age = age;
        }
    }
    void setIdol(string idolName)
    {
        p_Idol = idolName;
    }

private:
    // 只读
    int p_Age = 18; // 数据验证

    // 只写
    string p_Idol;

    // 可读可写
    string p_Name;
};

int main()
{
    person p1;
    p1.setName("张三");
    cout << "姓名是:" << p1.getName() << endl;

    p1.setAge(100);
    cout << "年龄是:" << p1.getAge() << endl;

    p1.setIdol("小明"); // 外界读不到
}