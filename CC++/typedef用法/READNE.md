# typedef用法

`typedef` 可以给类型取一个新名字

## 给普通类型取别名

如:

```c
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
```

## 给结构体取别名

如:

```c
typedef struct people {
    int age;
    int sex;
    char name[20];
} people_t;
------- 或 -------
typedef struct {
    int age;
    int sex;
    char name[20];
} people_t;
```

## 给函数取别名1

如:

```c
...
void print_int(int a)
{
    printf("%s : a = %d\n", __FUNCTION__, a);
}

typedef void (*pFun)(int);

void main(void)
{
    pFun fun_a = print_int;
    fun_a(1024);
}
------- 输出 -------
print_int : a = 1024
```

## 给函数取别名2

如:

```c
...
typedef void fun(int);

void print_int(int a)
{
    printf("%s : a = %d\n", __FUNCTION__, a);
}

void test(fun f)
{
    f(256);
}

void main(void)
{
    test(print_int);
}
------- 输出 -------
print_int : a = 256
```
