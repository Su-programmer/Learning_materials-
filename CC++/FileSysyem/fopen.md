# fopen 笔记

```c
/**
 * @brief   打开一个文件流
 *
 * @param   pathname        文件名
 * @param   mode            mode参数指向一个字符串
 * @return  int             成功返回文件流, 失败返回NULL, 并设置错误码
 */
FILE *fopen(const char *restrict pathname, const char *restrict mode);
```

```c
r = rb              O_RDONLY
w = wb              O_WRONLY|O_CREAT|O_TRUNC
a = ab              O_WRONLY|O_CREAT|O_APPEND
r+ = rb+ = r+b      O_RDWR
w+ = wb+ = w+b      O_RDWR|O_CREAT|O_TRUNC
a+ = ab+ = a+b      O_RDWR|O_CREAT|O_APPEND

注:
// 有 'r' 代表打开, 只读
// 有 'w' 代表新建, 存在则清空文件
// 有 'a' 代表打开或新建
// 有 'b' 代表为二进制文件, 否则代表文本文件
// 其他:
//     if       '+' -> O_RDWR
//     else if  'r' -> O_RDONLY
//     else         -> O_WRONLY
```
