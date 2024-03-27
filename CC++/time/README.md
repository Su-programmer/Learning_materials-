# time

## 时间戳

| 时间戳 | 时间                    | 备注       |
| ------ | ----------------------- | ---------- |
| 0      | 1970-01-01 00:00:00 UTC | 协调世界时 |
| 0      | 1970-01-01 00:00:00 GMT | 格林威治时 |
| 0      | 1970-01-01 00:00:00 CST | 北京时     |

---

| 类型           | 说明                           |
| -------------- | ------------------------------ |
| size_t         | unsigned int                   |
| clock_t        | 存储处理器时间的类型, long ?   |
| time_t         | 存储日历时间类型               |
| struct tm      | 结构体                         |
| CLOCKS_PER_SEC | 这个宏表示每秒的处理器时钟个数 |

## struct tm

```c
struct tm {
    int tm_sec;         // 秒，范围从 0 到 59
    int tm_min;         // 分，范围从 0 到 59
    int tm_hour;        // 小时，范围从 0 到 23
    int tm_mday;        // 一月中的第几天，范围从 1 到 31
    int tm_mon;         // 月，范围从 0 到 11
    int tm_year;        // 自 1900 年起的年数
    int tm_wday;        // 一周中的第几天，范围从 0 到 6
    int tm_yday;        // 一年中的第几天，范围从 0 到 365
    int tm_isdst;       // 夏令时
};
```

## struct timespec

```c
struct timespec {
    time_t  tv_sec    Seconds.
    long    tv_nsec   Nanoseconds.
};
```

## struct timeval

```c
struct timeval
{
    long tv_sec;  // 秒
    long tv_usec; // 微秒
};
```

---

## `char *asctime(const struct tm *timeptr)`

- 将 `struct tm` 转化为 `"Www Mmm dd hh:mm:ss yyyy"`

---

## `clock_t clock(void)`

- 获取 CPU 的 tick 数

---

## `char *ctime(const time_t *timer)`

- `time_t` 转化为 `"Www Mmm dd hh:mm:ss yyyy"`

---

## `time_t time(time_t *seconds)`

- 格林威治时间(1970-01-01 00:00:00 UTC) 起经过的时间, 以秒为单位.

---

## `struct tm *gmtime(const time_t *timer)`

- `time_t` 转化为 `struct tm`

---

## `struct tm *localtime(const time_t *timer)`

- `time_t` 转化为 `struct tm`, 并用本地时区表示

---

## `time_t mktime(struct tm *timeptr)`

- `struct tm` 转化为 `time_t`

---

## `double difftime(time_t time1, time_t time2)`

- `time1` 和 `time2` 相差的秒数

---
