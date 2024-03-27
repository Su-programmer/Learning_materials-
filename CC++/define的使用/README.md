# #define 的用法

## 修饰常量

```shell
...
#define PI 3.14
#define COUNTRY "CHINA"
#define SECOND_PER_YEAR (60 * 60 * 365)

int main()
{
    printf("PI = %f\n", PI);
    printf("COUNTRY = %s\n", COUNTRY);
    printf("SECOND_PER_YEAR = %d\n", SECOND_PER_YEAR);
}

```

* 打印结果

```shell
PI = 3.14
COUNTRY = CHINA
SECOND_PER_YEAR = 86400
```

---

## 修饰表达式

```shell
...
#define ADD(a, b) ((a) + (b))

int main()
{
    int a = 23;
    int b = 54;
    int c = ADD(a, b);
    printf("a + b = %d\n", c);
}
```

* 打印结果

```shell
a + b = 77
```

---

## 修饰函数

```shell
...
#define LOG(format, ...) fprintf(stdout, format, ##__VA_ARGD__)
#define SWAP(x, y) do {\
    x = x + y;\
    y = x - y;\
    x = x - y;\
} while (0)

int main()
{
    LOG("hello world!\n");
    LOG("PI = %d\n", 3.14);
    LOG("%d hours a day\n", 24);

    int a = 10;
    int b = 20;
    SWAP(a, b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
```

* 打印结果

```shell
hello world!
PI = 3.14
24 hours a day
a = 20
b = 10
```
