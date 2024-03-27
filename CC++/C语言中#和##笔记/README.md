# #和##的用法

* C语言中经常用到 `#` 和 `##`, 很多初学者不知道他们什么什么意思, 这儿我简单科普一下.

---

## \#的用法

* 当做 `replacement-text`令牌, 转换为引号引起来的字符串

```shell
...
#define TO_STR(x) #x
int main()
{
    int value = 123;
    printf("TO_STR(value) = %s\n", TO_STR(value));
    printf("TO_STR(123) = %s\n", TO_STR(123));
}
```

* 打印:

```shell
TO_STR(value) = value;
TO_STR(123) = 123;
```

---

## \##的用法

* 用于连接两个令牌

```shell
#define CONNECT(x,y) x##y
#define VAR(y) data##y
int main()
{
    int xy = 123;
    printf("xy = %d\n", CONNECT(x, y));

    CONNECT(x, y) = 123456;
    printf("xy = %d\n", CONNECT(x, y));

    int VAR(1) = 100;
    printf("VAR(1) = data1 = %d\n", data1);
}
```

* 打印

```c
xy = 132
xy = 123456
VAR(1) = data1 = 100

```

---

* 批量化定义
* main函数用两种方式解释了他的用法
* 其中第二种方式向用户隐藏变量的名字. 但是又给用户预留了调用的接口

```c++
typedef struct {
    int a;
    int b;
} node_t;

#define GetNode(name) &node_##name
#define NewNode(name) node_t node_##name

void InitNode(node_t *node)
{
    node->a = 1;
    node->b = 1;
}

void PrintNode(node_t *node)
{
    printf("a = %d\n", node->a);
    printf("b = %d\n", node->b);
}

int main()
{
    // 1
    NewNode(x); // 相当于node_t node_x;
    node_x.a = 10;
    printf("node_x.a = %d\n", node+x.a);

    // 2
    NewNode(y);
    InitNode(GetNode(y));
    PrintNode(GetNode(y));
}
```

* 打印

```shell
node_x.a = 10;
a = 1;
b = 1;
```

---
