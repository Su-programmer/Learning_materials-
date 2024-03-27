/*
 * 冒泡排序
 * 虽然它是一种选择排序---选出某个元素并把它放在列表正确的位置.
 * 但是交换排序与之不同,它系统化的交换那些不符合次序的元素对, 直到列表不存在这种元素对为止.此时列表就排好了.
 */

#include<iostream>
using namespace std;

#define DEBUG

/* 输出打印 */
void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        cout.width(4);
        cout.fill(' ');
        cout << array[i] << " ";
    }
    cout << endl;
}

/* 冒泡排序 */
void BubbleSort(int* array, int size)
{
    int tmp;
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
        /* 打印当前序列 */
#ifdef DEBUG 
        cout << "log:    ";
        PrintArray(array, size);
#endif
    }
}

int main()
{
    int array[] = { 1, 2, 3, 5, 8, 9, 6, 4, 7, 11 };
    int size = sizeof(array) / sizeof(int);
    cout << "size = " << size << endl;
    /* 排序 */
    BubbleSort(array, size);
    cout << "result: ";
    PrintArray(array, size);
    return 0;
}
