# 查询文件大小

## 查询当前的文件大小

```
$ du -h --max-depth=1
```

---

## `find` 查找

- [find菜鸟教程](https://www.runoob.com/linux/linux-comm-find.html)
- 查找指定目录下的文件/文件夹
    ```
    find [被查询目录] -name [文件名]
    ```

- 举例 ( 查找当前文件夹的`hello` )
`find . -name hello`

- 举例 ( 查找当前文件夹的文件含有 `hello` 的 )
`find ./ -name "*.h" | xargs grep -r "hello"`

---

## locate 查找

- [locate菜鸟教程](https://www.runoob.com/linux/linux-comm-locate.html)
- 它比find快, 因为它是从数据库查找的
- 它不是获取最新的, 一般每天都会更新
- 手动更细那数据库
    ```
    sudo updatedb
    ```

- 使用方法
  ```
  locate [参数] <文件名>
  ```
