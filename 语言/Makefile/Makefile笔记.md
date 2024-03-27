# MakeFile笔记

### 利用依赖文件生成目标文件

```shell
目标文件:依赖文件1 以来文件2** . . .
[Tab]命令
```

利用依赖文件生成目标文件,最后要保证用到的依赖文件和目标文件一定是最新的.

| 符号 | 说明               |
| ---- | ------------------ |
| `$@` | `规则的目标文件名` |
| `$<` | `第一个依赖文件名` |
| `$^` | `所有依赖的名字`   |
| `%`  | `通配符`           |

```shell
test:a.o b.o
    gcc -o test a.o b.o
a.o : a.c
    gcc -c -o a.o a.c
b.o : b.c
    gcc -c -o b.o b.c
```

上式也可以表示为

```shell
test:a.o b.o
    gcc -o $@ $^
%.o : %.c
    gcc -c -o $@ $<
```

### 使用 Makefile

**1:执行make默认执行第一条**
**2:make+目标文件:直接执行相应的行**

清除.o和test文件

```shell
clean:
    rm *.o test
```

第一次执行make clean会生成一个clean文件而二次发现有clean文件就不会执行目标
所以要定义假想目标

```shell
.PHONY: clean
```

因此要写成

```shell
test:a.o b.o
gcc -o $@ $^
%.o : %.c
gcc -c -o $@ $<
clean:
	rm *.o test
.PHONY: clean
```

### 延时变量和立即变量

A:=123	立即赋值
B= 123	使用时才赋值的延时变量
C?=123	如果C没定义就C:=123
D+=123	普通的左加操作

函数:

```shell
gcc –M c.c                              //打印出c.c的依赖
gcc –M –MF c.d c.c                     //把依赖写入文件c.d
gcc –c –o c.o c.c –MD –MF c.d          //编译c.o,把依赖写入文件c.d
```

---

## `?=` `:=` `+=` `=`

| 符号 | 含义                                                |
| ---- | --------------------------------------------------- |
| `=`  | `直接赋值`                                          |
| `?=` | `如果 FOO 没有被定义过，那么变量 FOO 的值就是"bar"` |
| `:=` | `后跟变量是有效, 使用这个变量此时的值`              |

### `:?` 备注

```shell
x = foo
y = $(x)
x = later
结果: y = later
```

```shell
x = foo
y := $(x)
x = later
结果: y = foo
```

### 补充

https://blog.csdn.net/srw11/article/details/7516712
