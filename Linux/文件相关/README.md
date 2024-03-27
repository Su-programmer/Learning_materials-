# linux源码编译

#### `Image`? `uImage`? `zImage`?

- linux源码编译之后生成的文件 一般在目录 `arch\arm\boot` 下
- `Image`  : 内核映像文件
- `zImage` : 内核的一种映像压缩文件
- `uImage` : 系统使用 `mkimage` 工具 将 `zImage` 前面加`64字节`的`头` 得到 `uImage`, `U-boot` 专用的映像文件
