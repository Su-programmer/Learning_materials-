# dir 命令

`$(dir <names...>)`

从文件名序列 `<names>` 中取出目录部分。目录部分是指最后一个反斜杠 `/` 之前的部分。
如果没有反斜杠，那么返回 `./`

## 示例

`$(dir src/foo.c hacks)` 返回值是 `src/ ./`

<!-- ## makefile

假如现在有如下目录

```c
/dir1
├─ dir11
│  ├─ cmsis_armcc.h
│  ├─ cmsis_armclang.h
│  └─ cmsis_compiler.h
└─ makefile
```

```makefile
略
``` -->
