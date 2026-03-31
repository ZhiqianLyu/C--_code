#include <iostream>
using namespace std;

struct student
{
    string sName;
    int score;
};

struct teacher
{
    string tName;
    struct student sArray[5];
};

void allocateSpace(struct teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        string nameSeed = "ABCDE";
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];

            int random = rand() % 61 + 40; // 40 ~ 100
            tArray[i].sArray[j].score = random;
        }
    }
}

void printInfo(struct teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师的姓名" << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名: " << tArray[i].sArray[j].sName
                 << "考试分数 " << tArray[i].sArray[j].score << endl;
        }
    }
}

int main()
{
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 创建老师数组

    struct teacher tArray[3];
    // 通过函数给3名老师赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    // 打印学生信息
    printInfo(tArray, len);
    return 0;
}