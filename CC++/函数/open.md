# open()

```c
int open(const char * pathname, int flags, ... /*mode_t mode*/); // <fcntl.h>
```

> 打开文件, 如果 `flags` 并未指定 `O_CREAT` 标志，则可以省略 `mode` 参数

**参数:**

| name          | des                 |
| ------------- | ------------------- |
| `pathname`    | 文件名              |
| `flags`       | [详见flags](#flags) |
| `...`         | ...                 |
| `mode_t mode` | 模式                |

**返回:**

文件描述符

---

## 常见用法

- `open("a.txt", O_CREAT | O_EXCL)`
- 如果文件已经存在, 就返回错误, 并设置错误码 EEXIST
- 否则 创建并且打开文件

---

## flags

| 标 志       | 用 途                                                          |
| ----------- | -------------------------------------------------------------- |
| O_RDONLY    | 以只读方式打开                                                 |
| O_WRONLY    | 以只写方式打开                                                 |
| O_RDWR      | 以读写方式打开                                                 |
|             |                                                                |
| O_CLOEXEC   | 设置 close-on-exec 标志(自 Linux 2.6.23 版本开始)              |
| O_CREAT     | 若文件不存在则创建之                                           |
| O_DIRECT    | 无缓冲的输入/输出                                              |
| O_DIRECTORY | 如果 pathname 不是目录, 则失败                                 |
| O_EXCL      | 结合 O_CREAT 参数使用, 专门用于创建文件                        |
| O_LARGEFILE | 在 32 位系统中使用此标志打开大文件                             |
| O_NOATIME   | 调用 read()时, 不修改文件最近访问时间(自 Linux 2.6.8 版本开始) |
| O_NOCTTY    | 不要让 pathname(所指向的终端设备)成为控制终端                  |
| O_NOFOLLOW  | 对符号链接不予解引用                                           |
| O_TRUNC     | 截断已有文件, 使其长度为零                                     |
| O_APPEND    | 总在文件尾部追加数据                                           |
| O_ASYNC     | 当 I/O 操作可行时, 产生信号(signal)通知进程                    |
| O_DSYNC     | 提供同步的 I/O 数据完整性(自 Linux 2.6.33 版本开始)            |
| O_NONBLOCK  | 以非阻塞方式打开                                               |
| O_SYNC      | 以同步方式写入文件                                             |

---

## mode

| 访 问 模 式 | 描 述              |
| ----------- | ------------------ |
| O_RDONLY    | 以只读方式打开文件 |
| O_WRONLY    | 以只写方式打开文件 |
| O_RDWR      | 以读写方式打开文件 |

受 `umask` 的影响

| 常 量   | 其 他 值 | 权 限 位      |
| ------- | -------- | ------------- |
| S_ISUID | 04000    | Set-user-ID   |
| S_ISGID | 02000    | Set-group-ID  |
| S_ISVTX | 01000    | Sticky        |
| S_IRUSR | 0400     | User-read     |
| S_IWUSR | 0200     | User-write    |
| S_IXUSR | 0100     | User-execute  |
| S_IRGRP | 040      | Group-read    |
| S_IWGRP | 020      | Group-write   |
| S_IXGRP | 010      | Group-execute |
| S_IROTH | 04       | Other-read    |
| S_IWOTH | 02       | Other-write   |
| S_IXOTH | 01       | Other-execute |

---
