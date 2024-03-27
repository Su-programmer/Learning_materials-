# 条件编译指令

## 定义与取消定义

| 描述                         | 代码              |
| ---------------------------- | ----------------- |
| 定义`AAA`为`111`             | `#define AAA 111` |
| 定义`AAA`, 但没定义`AAA`的值 | `#define AAA`     |
| 取消定义`AAA`                | `#undef AAA`      |

---

## 选择定义

* 如果定义了`AAA`, 那么就定义`ZZZ`为`222`

```shell
#ifdef AAA
    #define ZZZ 222
#endif
```

---

* 如果没有定义`AAA`, 那么就定义`ZZZ`为`222`

```shell
#ifndef AAA
    #define ZZZ 222
#endif
```

---

* 如果定义了`AAA`并且定义了`BBB`, 那么就定义`ZZZ`为`222`

```shell
#if defined(AAA) && defined(BBB)
    #define ZZZ 222
#endif
```

---

* 如果定义了`AAA`或者定义了`BBB`, 那么就定义ZZZ为`222`

```shell
#if defined(AAA) || defined(BBB)
    #define ZZZ 222
#endif
```

---

* 如果定义了`AAA`并且没有定义了`BBB`, 那么就定义ZZZ为`222`

```shell
#if defined(AAA) && (!defined(BBB))
    #define ZZZ 222
#endif
```

---

* `||` 和 `&&` 也可以混合使用, 为了避免逻辑混乱, 最好加上必要的括号
* 也可以结合`#elif`, `#else`一起使用, 相当于`if - else if - else` 结构中的`else if`, `else`

```shell
#if (defined(AAA) && defined(BBB)) || defined(CCC)
    #define ZZZ 222
#elif (defined(AAA) && defined(BBB)) || (!defined(CCC))
    #define ZZZ 333
#else
    #define ZZZ 444
#endif
```

### 典型用法

* 在`xxx.h`文件中, 通常会使用以下方式避免头文件的重复包含

```C
// xxx.h
#ifndef _XXX_H_
#define _XXX_H_
...
#endif
```
