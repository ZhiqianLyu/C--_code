#include <iostream>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct hero hArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (hArray[j].age > hArray[j + 1].age)
            {
                struct hero temp = hArray[j];
                hArray[j] = hArray[j + 1];
                hArray[j + 1] = temp;
            }
        }
    }
}

void printInfo(struct hero hArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "英雄姓名: " << hArray[i].name << "\n"
             << "英雄年龄: " << hArray[i].age << "\n"
             << "英雄性别: " << hArray[i].sex << "\n----------" << endl;
    }
}

int main()
{

    struct hero hArray[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 21, "男"},
        {"貂蝉", 18, "女"},
        {"吕布", 25, "男"}};

    int len = sizeof(hArray) / sizeof(hArray[0]);

    bubbleSort(hArray, len);

    printInfo(hArray, len);

    return 0;
}