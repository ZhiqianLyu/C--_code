#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;
    cout << "利用指针访问第一个元素:" << *p << endl;

    // 利用指针访问所有数组
    for (int i = 0; i < 10; i++)
    {
        cout << *p;
        p++;
    }

    // p++;
    // cout << "第二个函数:" << *p << endl;



    return 0;
}