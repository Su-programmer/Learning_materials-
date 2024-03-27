# Socket编程笔记

- SOCK_STREAM 流格式套接字
- SOCK_DGRAM 数据报格式套接字

### struct sockaddr 储存套接字地址信息

```
struct sockaddr {
 unsigned short sa_family;      /* 地址家族, AF_xxx */
 char sa_data[14];              /*14 字节协议地址*/
};
 ```

### struct sockaddr_in ("in" 代表 "Internet"。)

```
struct sockaddr_in {
    short int sin_family;                           /* 通信类型 */
    unsigned short int sin_port;                    /* 端口 */
    struct in_addr sin_addr;                        /* Internet 地址 */
    unsigned char sin_zero[8];                      /* 与 sockaddr 结构的长度相同*/
};
```

**sin_port**和**sin_addr**必须是网络字节序

```
struct in_addr {
    unsigned long s_addr;
};
 ```

## 字节序转换

- **short** (两个字节)
- **long** (四个字节)

假设你想将 short 从本机字节顺序转换为网络字节顺序。

```
用 "h" 表示 "本机 (host)"
接着是 "to"
然后用 "n" 表示"网络 (network)"
最后用 "s" 表示 "short"
h-to-n-s 或者 htons()("Host to Network Short")
```

以此类推

- **htons()**--"Host to Network Short"
- **htonl()**--"Host to Network Long"
- **ntohs()**--"Network to Host Short"
- **ntohl()**--"Network to Host Long"

### 将 IP 地址从点数格式转换成无符号长整型 inet_addr()

```sockaddr_in  ina;```
```ina.sin_addr.s_addr = inet_addr("132.241.5.10");```

### 将 IP 地址从成无符号长整型转换点数格式 inet_ntoa()

```
printf("%s",inet_ntoa(ina.sin_addr));
```

## socket()函数

```int socket(int domain, int type, int protocol);```

- **domain** 应该设置成 "AF_INET"
- **type** 告诉内核是SOCK_STREAM 类型还是 SOCK_DGRAM 类型
- **protocol** 设置为 "0"

## bind()函数

```int bind(int sockfd, struct sockaddr *my_addr, int addrlen);```

- **sockfd** 是调用 socket 返回的文件描述符
- **my_addr** 是指向数据结构 struct sockaddr 的指针，它保存你的地址(即端口和 IP 地址) 信息
- **addrlen** 设置为 sizeof(struct sockaddr)。

**例子：**

```
#define MYPORT 3490
main()
 {
    int sockfd;
    struct sockaddr_in my_addr;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);            /* 需要错误检查 */
    my_addr.sin_family = AF_INET;                        /* host byte order */
    my_addr.sin_port = htons(MYPORT);                    /* short, network byte order */
    my_addr.sin_addr.s_addr = inet_addr("132.241.5.10");
    bzero(&(my_addr.sin_zero),;                          /* zero the rest of the struct */

    /* don't forget your error checking for bind(): */
    bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr));
    .
    .
    .
 }
 ```

 **注意：**

- my_addr.sin_port 是网络字节顺序
- my_addr.sin_port = 0; 随机选择一个没有使用的端口
- my_addr.sin_addr.s_addr = INADDR_ANY; 使用自己的 IP 地址

## connect()程序

```int connect(int sockfd, struct sockaddr *serv_addr, int addrlen);```

- sockfd 是系统调用 socket() 返回的套接字文件描述符
- serv_addr 是保存着目的地端口和 IP 地址的数据结构 struct sockaddr
- addrlen 设置为sizeof(struct sockaddr)。

**例子：**

```
#define DEST_IP "132.241.5.10"
#define DEST_PORT 23
main()
{
    int sockfd;
    struct sockaddr_in dest_addr;                       /* 目的地址*/
    sockfd = socket(AF_INET, SOCK_STREAM, 0);           /* 错误检查 */
    dest_addr.sin_family = AF_INET;                     /* host byte order */
    dest_addr.sin_port = htons(DEST_PORT);              /* short, network byte order */
    dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);
    bzero(&(dest_addr.sin_zero),;                       /* zero the rest of the struct */

    /* don't forget to error check the connect()! */
    connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
    .
    .
    .
}
 ```

## listen()函数
