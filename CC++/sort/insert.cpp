/*
 * 插入排序;//
 * 基本思想---反复地插入新元素到已经排好序的列表之中, 且令插入后的列表也是有序的. 类似扑克牌的持牌方法.
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
void InsertSort(int* array, int size)
{
    int i, j, tmp;
    for (i = 1; i < size; i++) {
        tmp = array[i];
        for (j = i; j > 0 && array[j - 1] > tmp; j--) {
            array[j] = array[j - 1];
        }
        array[j] = tmp;
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
    InsertSort(array, size);
    cout << "result: ";
    PrintArray(array, size);
    return 0;
}
