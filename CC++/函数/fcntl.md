# fcntl

> fcntl.h / fcntl()

```c
int fcntl(int fd, int cmd, ...);
```

> 对一个打开的文件描述符执行一系列控制操作

**参数:**

| name  | des        |
| ----- | ---------- |
| `fd`  | 文件描述符 |
| `cmd` | 一个参数针 |
| `...` | ...        |

## 参数 `cmd`

| cmd        | 描述                 |
| ---------- | -------------------- |
| `F_DUPFD`  | 复制一个现有的描述符 |
|            |                      |
| `F_GETFD`  | 获得文件描述符标记   |
| `F_SETFD`  | 设置文件描述符标记   |
|            |                      |
| `F_GETFL`  | 获得文件状态标记     |
| `F_SETFL`  | 设置文件状态标记     |
|            | `O_NONBLOCK` 非阻塞  |
|            | `O_APPEND` 追加      |
|            |                      |
| `F_GETOWN` | 获得异步I/O所有权    |
| `F_SETOWN` | 设置异步I/O所有权    |
|            |                      |
| `F_GETLK`  | 获得记录锁           |
| `F_SETLK`  | 设置记录锁           |
| `F_SETLKW` | 设置记录锁           |
