# notdir 命令

`$(notdir <names...>)`

从文件名序列 `<names>` 中取出非目录部分。非目录部分是指最後一个反斜杠 `/` 之后的部
分

## 示例

`$(notdir src/foo.c hacks)` 返回值是 `foo.c hacks`
