# Kbuild基础知识

|              |                      | 举例             |
| ------------ | -------------------- | ---------------- |
| `obj-m`      | 编译可装载模块       | `obj-m += foo.o` |
| `obj-y`      | 编译进内核           | `obj-y += foo.o` |
|              |                      | `obj-y += dir1/` |
| `(foo)-objs` | 指定编译对象所需文件 |                  |
|              |                      |                  |
|              |                      |                  |
|              |                      |                  |
| `lib-y`      | 目标库文件           | `lib-y += foo.o` |
|              |                      |                  |
|              |                      |                  |
|              |                      |                  |
|              |                      |                  |
|              |                      |                  |
|              |                      |                  |

## EXTRA_CFLAGS 添加外部头文件

```makefile
EXTRA_CFLAGS += $(ext_include_path)
```
