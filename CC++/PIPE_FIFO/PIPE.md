# PIPE

```c
int pipe(int pipefd[2]);    // <unistd.h> / pipe()
```

- fd[0] 读出端
- fd[1] 写入端

## 示例

```c
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/shm.h>
#include <unistd.h>

#define PRINT_ERROR_INFO printf("error: %s, %d\n", __FILE__, __LINE__)

int main()
{
    int fd[2];
    if (pipe(fd) != 0) {
        PRINT_ERROR_INFO;
        return 0;// 失败
    }

    pid_t pid = fork();
    if (pid == 0) {

        // 读测试
        sleep(1);
        char readBuffer[100];
        close(fd[1]);
        if (read(fd[0], readBuffer, 20) == -1) {
            close(fd[0]);
            exit(1);
        }
        printf("read %s\n", readBuffer);
        close(fd[0]);
        exit(0);
    }

    // 写测试
    close(fd[0]);
    write(fd[1], "hello world", sizeof("hello world"));
    sleep(2);
    return 1;
}
```
