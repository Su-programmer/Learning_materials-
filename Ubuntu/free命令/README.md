# free 命令

```shell
$ free
              total        used        free      shared  buff/cache   available
Mem:        2017444      318884      169640        8028     1528920     1502980
Swap:       2097148        1036     2096112
```

|              |                                    |
| ------------ | ---------------------------------- |
| `Mem`        | 内存的使用情况                     |
| `Swap`       | 交换空间的使用情况                 |
| `total`      | 总的物理内存                       |
| `free`       | 未使用的内存                       |
| `shared`     | 是基于tmpfs的共享内存              |
| `buff/cache` | buff和cache的总和                  |
| `available`  | 还可以被应用程序使用的物理内存大小 |

---
