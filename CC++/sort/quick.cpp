/*
 * 快速排序;
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

/* 交换元素 */
void Swap(int *array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int Split(int* array, int first, int last)
{
    int pivot = array[first];
    int left = first;
    int right = last;
    while (left < right) {
        while (pivot < array[right]) {
            right--;
        }
        while ((left < right) && (pivot >= array[left])) {
            left++;
        }
        if (left < right) {
            Swap(array, left, right);
        }
    }
    array[first] = array[right];
    array[right] = pivot;
    return right;
}

/* 快速排序, 从 第first个 到 第last个 */
void QuickSort(int* array, int first, int last)
{
    int pos;
    if (first < last) {
        pos = Split(array, first, last);
        QuickSort(array, first, pos - 1);
        QuickSort(array, pos + 1, last);
    }
}

int main()
{
    int array[] = { 1, 2, 3, 5, 8, 9, 6, 4, 7, 11 };
    int size = sizeof(array) / sizeof(int);
    cout << "size = " << size << endl;
    /* 排序 */
    QuickSort(array, 0, size - 1);
    cout << "result: ";
    PrintArray(array, size);
    return 0;
}
