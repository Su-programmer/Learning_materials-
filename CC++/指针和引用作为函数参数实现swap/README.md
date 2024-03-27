# 指针和引用作为函数参数

- 话不多说, 直接上代码吧

```
#include <iostream>
using namespace std;

// 指针实现交换
void swap_pointer(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用实现交换
void swap_quote(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int num1 = 100;
    int num2 = 200;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl << endl;

    swap_pointer(&num1, &num2);
    cout << "use swap_pointer" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl << endl;

    swap_quote(num1, num2);
    cout << "use swap_quote" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
```

- 运行结果

```
num1 = 100
num2 = 200

use swap_pointer
num1 = 200
num2 = 100

use swap_quote
num1 = 100
num2 = 200
```