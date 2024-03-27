# dd命令

`ddd if=/dev/zero of=xximage bs=512 count=1M`

- 创建一个文件
- 输入文件为 `/dev/zero`, 这是一个 `0文件`
- 输出文件为 `xximage`
- 每次写 `512` 字节
- 写 `1M` 次
