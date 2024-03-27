# 编译参数

[参考链接](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)

|          |                                                                |
| -------- | -------------------------------------------------------------- |
| CFLAGS   | 用于 C 编译器的选项                                            |
| CXXFLAGS | 用于 C++ 编译器的选项                                          |
|          |                                                                |
| LDFLAGS  | gcc 等编译器会用到的一些优化参数, 也可以在里面指定库文件的位置 |
| LIBS     | 告诉链接器要链接哪些库文件                                     |
|          |                                                                |
|          |                                                                |

## 附件(参数)

|                      |                                                |
| -------------------- | ---------------------------------------------- |
| -w                   | 不生成任何警告信息                             |
| -Wall                | 显示所有警告信息                               |
| -Werror              | 把所有的告警信息转化为错误信息                 |
| -W 同 -Wextra        | 这会启用一些未由 `-Wall` 启用的额外警告标志    |
| -Wshadow             | 警告当一个局部变量遮盖住了另一个变量           |
| -Wpointer-arith      | 警告对函数指针或者void *类型的指针进行算术操作 |
| -Wcast-qual          | 当强制转化丢掉了类型修饰符时给出警告           |
| -Waggregate-return   | 定义或调用了返回结构体或联合体的函数           |
| -Winline             | 某函数不能内联                                 |
| -Wunreachable-code   | 编译器探测到永远不会执行到的代码               |
| -Wcast-align         | 某个指针类型强制转换导致目标所需的地址对齐增加 |
| -Wundef              | 一个没有定义的符号出现在 #if 中                |
| -Wredundant-decls    | 同一个可见域内某定义多次声明                   |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |
| -funsigned-bitfields | 没有明确声明 `signed` 或 `unsigned` 修饰符     |
| -Wstrict-prototypes  | 函数的声明或定义没有指出参数类型               |
| -Wmissing-prototypes | 没有预先声明就定义了全局函数                   |
| -Wnested-externs     | 某extern声明出现在函数内部                     |
|                      |                                                |
| -Wfatal-errors       | 会导致编译器在发生第一个错误时中止编译         |
| -Wformat             | 检查对printf和scanf等的调用                    |
| -Winit-self          | 警告使用自身初始化的未初始化变量               |
| -Wno-implicit-int    | 当声明未指定类型时,此选项控制警告              |
|                      |                                                |
|                      |                                                |
| `-W` + `xxxx`        | 开启特定的警告                                 |
|                      |                                                |
|                      |                                                |
|                      |                                                |
| `-Wno-` + `xxxx`     | 关闭特定的警告                                 |
| -Wno-return-type     | 取消返回值告警                                 |
| -Wno-sign-compare    | 取消有符号和无符号对比告警                     |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |
|                      |                                                |


## -Wall 会打开以下警告

|                                                          |
| -------------------------------------------------------- |
| -Waddress                                                |
| -Warray-bounds=1 (only with -O2)                         |
| -Wbool-compare                                           |
| -Wbool-operation                                         |
| -Wc++11-compat  -Wc++14-compat                           |
| -Wcatch-value (C++ and Objective-C++ only)               |
| -Wchar-subscripts                                        |
| -Wcomment                                                |
| -Wduplicate-decl-specifier (C and Objective-C only)      |
| -Wenum-compare (in C/ObjC; this is on by default in C++) |
| -Wformat                                                 |
| -Wint-in-bool-context                                    |
| -Wimplicit (C and Objective-C only)                      |
| -Wimplicit-int (C and Objective-C only)                  |
| -Wimplicit-function-declaration (C and Objective-C only) |
| -Winit-self (only for C++)                               |
| -Wlogical-not-parentheses                                |
| -Wmain (only for C/ObjC and unless -ffreestanding)       |
| -Wmaybe-uninitialized                                    |
| -Wmemset-elt-size                                        |
| -Wmemset-transposed-args                                 |
| -Wmisleading-indentation (only for C/C++)                |
| -Wmissing-attributes                                     |
| -Wmissing-braces (only for C/ObjC)                       |
| -Wmultistatement-macros                                  |
| -Wnarrowing (only for C++)                               |
| -Wnonnull                                                |
| -Wnonnull-compare                                        |
| -Wopenmp-simd                                            |
| -Wparentheses                                            |
| -Wpointer-sign                                           |
| -Wreorder                                                |
| -Wrestrict                                               |
| -Wreturn-type                                            |
| -Wsequence-point                                         |
| -Wsign-compare (only in C++)                             |
| -Wsizeof-pointer-div                                     |
| -Wsizeof-pointer-memaccess                               |
| -Wstrict-aliasing                                        |
| -Wstrict-overflow=1                                      |
| -Wswitch                                                 |
| -Wtautological-compare                                   |
| -Wtrigraphs                                              |
| -Wuninitialized                                          |
| -Wunknown-pragmas                                        |
| -Wunused-function                                        |
| -Wunused-label                                           |
| -Wunused-value                                           |
| -Wunused-variable                                        |
| -Wvolatile-register-var                                  |

## -Wextra 启用 -Wall 未启用的额外警告标志

|                                                          |
| -------------------------------------------------------- |
| -Wclobbered                                              |
| -Wcast-function-type                                     |
| -Wempty-body                                             |
| -Wignored-qualifiers                                     |
| -Wimplicit-fallthrough=3                                 |
| -Wmissing-field-initializers                             |
| -Wmissing-parameter-type (C only)                        |
| -Wold-style-declaration (C only)                         |
| -Woverride-init                                          |
| -Wsign-compare (C only)                                  |
| -Wtype-limits                                            |
| -Wuninitialized                                          |
| -Wshift-negative-value (in C++03 and in C99 and newer)   |
| -Wunused-parameter (only with -Wunused or -Wall)         |
| -Wunused-but-set-parameter (only with -Wunused or -Wall) |