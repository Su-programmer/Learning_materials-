# C++构造函数

## 构造函数的种类

```c++
class Test{
    private:
        int _id;
        int _num;

    public:
        Test();
        Test(int a);
        Test(int a, int b);
        Line::Line(const Line &obj);
        ~Test();
}

// 普通的构造函数
Test::Test()
{
    ...
}

// 带参数的构造函数
Test::Test(int a)
{
    ...
}

// 带参数的构造函数
Test::Test(int a, int b)
{
    ...
}

// 拷贝构造函数
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}

```

---

## `= default` 和 `= delete` 修饰

```
class Test{
    private:
        int _id;

    public:
        Test() = default; // 定义默认构造函数
        Test(int a);
        Test(const Test& test) = delete;  // 禁止使用拷贝构造函数的场景
        Test& operator=(const Test& test);
        ~Test();
}
```

- 当使用 `= default` 修饰时, 表示默认的构造函数
- 当使用 `= delete` 修饰时, 表示删除这种构造函数