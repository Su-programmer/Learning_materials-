/*
 * 堆排序
 * *是一棵完全二叉树
 * *满足堆次序要求:根节点大于或等于其子女的数据项
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

/* 建堆 */
void Heapfy(int *array, int i, int length)
{
    int key = 2 * i + 1;/* 左节点 */
    if ((key < length - 1) && (array[key] < array[key + 1])) { /* 如果右节点大, 指向右节点 */
        key++;
    }
    if ((key < length) && (array[key] > array[i])) { /* 如果比父节点大 */
        Swap(array, i, key);
        Heapfy(array, key, length);
    }
}

/* 建大顶堆 */
void BuildMaxHeap(int* array, int length)
{
    for (int i = length / 2 - 1; i >= 0; i--) {
        Heapfy(array, i, length);
    }
}


/* 快速排序, 从 第first个 到 第last个 */
void HeapSort(int* array, int size)
{
    int length = size;
    BuildMaxHeap(array, length);
    for (int i = size - 1; i > 0; i--) {
        Swap(array, 0, i);
        length--;
        Heapfy(array, 0, length);
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
    HeapSort(array, size);
    cout << "result: ";
    PrintArray(array, size);
    return 0;
}
