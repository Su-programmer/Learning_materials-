# other

用来表示文件权限位的常量

| 常 量     | 其 他 值 | 权 限 位      |
| --------- | -------- | ------------- |
| `S_ISUID` | `04000`  | Set-user-ID   |
| `S_ISGID` | `02000`  | Set-group-ID  |
| `S_ISVTX` | `01000`  | Sticky        |
|           |          |               |
| `S_IRUSR` | `0400`   | User-read     |
| `S_IWUSR` | `0200`   | User-write    |
| `S_IXUSR` | `0100`   | User-execute  |
|           |          |               |
| `S_IRGRP` | `040`    | Group-read    |
| `S_IWGRP` | `020`    | Group-write   |
| `S_IXGRP` | `010`    | Group-execute |
|           |          |               |
| `S_IROTH` | `04`     | Other-read    |
| `S_IWOTH` | `02`     | Other-write   |
| `S_IXOTH` | `01`     | Other-execute |