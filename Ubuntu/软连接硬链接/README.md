# 软连接硬链接

## 创建硬连接

`ln srcfile hardfile`

- `srcfile`  和 `srcfile` 的 `inode` 是一样的
- 修改 `softfile` 和 `srcfile` 其中一个另一个也会改变

## 创建软连接

`ln -s srcfile softfile`

- `srcfile`  和 `softfile` 的 `inode` 不一样
- `srcfile` 可以是不存在的一个文件
- `softfile` 指向 `srcfile`
- 修改 `softfile` 和 `srcfile` 其中一个另一个也会改变
- 如果不存在 `srcfile`, 修改 `softfile` 是自动创建  `srcfile`
