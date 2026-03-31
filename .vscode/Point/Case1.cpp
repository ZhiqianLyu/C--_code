#include <iostream>
using namespace std;
/* 使用冒泡排序将数组的数字按升序排列*/

// 参数一 数组首地址， 参数二 数组长度
void bubblesort(int *arr, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[5] = {6, 5, 3, 7, 8};

    int len = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, len);

    printArray(arr, len);

    return 0;
}