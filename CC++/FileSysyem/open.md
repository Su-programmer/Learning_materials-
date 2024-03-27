# open 笔记

```c
/**
 * @brief   打开一个文件
 *
 * @param   pathname        文件名
 * @param   oflag           文件的访问模式 O_RDONLY, O_WRONLY, O_RDWR 等
 * @param   ...             mode, 文件的访问权限
 * @return  int             成功返回文件句柄, 失败返回-1, 并设置错误码
 */
int mock_open(const char *pathname, int oflag, ...);
```

## oflag 说明

| 以下三选一 | note           |
| ---------- | -------------- |
| `O_RDONLY` | 以只读方式打开 |
| `O_WRONLY` | 以只写方式打开 |
| `O_RDWR`   | 以读写方式打开 |

```c
O_CREAT           文件不存在则创建, 存在则打开
O_CREAT | O_EXCL  只用于创建文件, 文件存在则创建失败
O_APPEND          总在文件尾部追加数据
O_NONBLOCK        以非阻塞方式打开, 若未能立即打开, 则返回失败, 而非阻塞
                  open 成功后, 后续的 I/O 操作也是非阻塞的
O_TRUNC           截断已有文件, 相当于删除再创建
```
