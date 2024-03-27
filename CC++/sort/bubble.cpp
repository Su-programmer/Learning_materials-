/*
 * ð������
 * ��Ȼ����һ��ѡ������---ѡ��ĳ��Ԫ�ز����������б���ȷ��λ��.
 * ���ǽ���������֮��ͬ,��ϵͳ���Ľ�����Щ�����ϴ����Ԫ�ض�, ֱ���б���������Ԫ�ض�Ϊֹ.��ʱ�б���ź���.
 */

#include<iostream>
using namespace std;

#define DEBUG

/* �����ӡ */
void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        cout.width(4);
        cout.fill(' ');
        cout << array[i] << " ";
    }
    cout << endl;
}

/* ð������ */
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
        /* ��ӡ��ǰ���� */
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
    /* ���� */
    BubbleSort(array, size);
    cout << "result: ";
    PrintArray(array, size);
    return 0;
}
