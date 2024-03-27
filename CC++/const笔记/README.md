# const笔记

---

## 简介

"const" 是constant的缩写, 表示"海枯石烂, 恒定不变, 一旦相伴, 永不变心".

## how to 理解

* 将类型去掉
* 看 const 修饰谁, 谁就拥有了不变的特性.

## 举例

### `const int a = 10;`

* 去掉 `int`, 变成了 `const a = 10`, `a`的值不变.

### `int const a = 10;`

* 去掉 `int`, 变成了 `const a = 10`, `a`的值不变.

### `const int a[10] = {1,2,3,4,5,6,7,8,9,10};`

* 去掉 `int`, 变成了 `const a[10]`, `a数组` 里面的值就不变.

### `int const * p;`

* 去掉 `int`, 变成了 `const * p`, `p` 指向的空间里值不变.

### `int * const p;`

* 去掉 `int *`, 变成了 `const p`, `p` 的值不变.

### `const struct devices dev[5];`

* 去掉 `struct device`, 变成了 `const dev[5]`, `dev数组` 里的值不变.

### `struct devices const * dev[5];`

* 去掉 `struct device`, 变成了 `const * dev[5]`, `dev数组` 里每个元素指向的空间里的值不变.

## 总结

用多了就习惯了.

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
