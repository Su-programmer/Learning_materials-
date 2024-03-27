# stdargs.h 标准库

## 须知

|            |      |                                                      |
| ---------- | ---- | ---------------------------------------------------- |
| `...`      | 变参 | 可变的参数                                           |
| `va_list`  | 类型 | 用来存储 `...` 的信息 `( 包括参数和索引状态 等信息 )` |
| `ap`       | 变量 | `va_list` 类型, 存储通过 `va_arg` 获取 `...` 的信息  |
| `last_arg` | 变量 | 最后一个传递给函数的已知的固定参数, `...` 之前的参数 |

## va_start()

`void va_start(va_list ap, last_arg)`

- `last_arg` 省略了类型
- 初始化 `ap` 变量

## va_arg()

`type va_arg(va_list ap, type)`

- 获取 `ap` 中类型为 `type` 的下一个参数

---

## va_end()

`void va_end(va_list ap)`

- 使用完 `ap` 之后必须调用这个函数

```c
#include<stdarg.h>
#include<stdio.h>

int sum(int, ...);

int main(void)
{
   printf("10、20 和 30 的和 = %d\n",  sum(3, 10, 20, 30) );
   printf("4、20、25 和 30 的和 = %d\n",  sum(4, 4, 20, 25, 30) );

   return 0;
}

int sum(int num_args, ...)
{
   int val = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   for(i = 0; i < num_args; i++)
   {
      val += va_arg(ap, int);
   }
   va_end(ap);

   return val;
}
```
