# C语言输入函数总结

## getchar()

* 读空格
* 遇到换行符结束, 读取失败返回EOF

`c = getchar();`

## gets()

* 读取字符串, 错误返回NULL
* 以换行符结束, 并把换行符转化为'\0'

```shell
char ch[20];
gets(ch);
```

## getc()

```shell
char c;
c = getc(stdin);
```

## fgetc()

* 从路中去数据
* 会强制以`无符号char`强制转换为`int`的形式返回
* 返回EOF表示文件结尾
