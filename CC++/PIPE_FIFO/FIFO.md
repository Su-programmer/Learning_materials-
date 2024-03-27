# FIFO

```c
int mkfifo(const char *pathname, mode_t mode);  // <sys/stat.h> / mkfifo
```

> 创建有名管道

**参数:**

| name       | des            |
| ---------- | -------------- |
| `pathname` | 文件名         |
| `mode`     | 新 fifo 的权限 |

**mode:**

| 访 问 模 式 | 描 述              |
| ----------- | ------------------ |
| O_RDONLY    | 以只读方式打开文件 |
| O_WRONLY    | 以只写方式打开文件 |
| O_RDWR      | 以读写方式打开文件 |

---

## 示例

```c
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define PRINT_ERROR_INFO printf("error: %s, %d\n", __FILE__, __LINE__)
#define FIFO_PATH "fifo_file"

void main(void)
{
    int fd;
    char write_buff[] = "Hello World";
    char read_buff[20];

    pid_t pid = fork();
    if (pid < 0) {
        PRINT_ERROR_INFO;
        return;
    } else if (pid == 0) {
        sleep(1);
        fd = open(FIFO_PATH, O_WRONLY);
        if (fd == -1) {
            PRINT_ERROR_INFO;
            exit(0);
        }
        write(fd, write_buff, sizeof(write_buff));
        close(fd);
        exit(0);
    }

    int ret = mkfifo(FIFO_PATH, 0666);
    if (ret != 0) {
        PRINT_ERROR_INFO;
    }
    fd = open(FIFO_PATH, O_RDONLY);
    if (fd == -1) {
        PRINT_ERROR_INFO;
    }
    if (read(fd, read_buff, sizeof(read_buff)) == -1) {
        PRINT_ERROR_INFO;
    }
    printf("> parent read: %s\n", read_buff);

    close(fd);
    sleep(1); //  wait child exit
    remove(FIFO_PATH);
}
```
