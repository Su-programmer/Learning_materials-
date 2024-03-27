# attribute 的用法

attribute用来修饰函数的、类型、变量.

## 用法

格式 : `__attribute__(attribute-list) [被修饰体]`

## `attribute-list`

| 函数属性(Function Attribute) | 类型属性(Type Attributes) | 变量属性(Variable Attribute)  | Clang特有的  |
| ---------------------------- | ------------------------- | ----------------------------- | ------------ |
| noreturn                     | aligned                   | alias                         | availability |
| noinline                     | packed                    | at(address)                   | overloadable |
| always_inline                | bitband                   | aligned                       |
| flatten                      |                           | deprecated                    |              |
| pure                         |                           | noinline                      |              |
| const                        |                           | packed                        |              |
| constructor                  |                           | weak                          |              |
| destructor                   |                           | weakref(“target”)             |              |
| sentinel                     |                           | section(“name”)               |              |
| format                       |                           | unused                        |              |
| format_arg                   |                           | used                          |              |
| section                      |                           | visibility(“visibility_type”) |              |
| used                         |                           | zero_init                     |              |
| unused                       |                           |                               |              |
| deprecated                   |                           |                               |              |
| weak                         |                           |                               |              |
| malloc                       |                           |                               |              |
| alias                        |                           |                               |              |
| warn_unused_result           |                           |                               |              |
| nonnull                      |                           |                               |              |
| nothrow (不抛出C++ 异常)     |                           |                               |              |

---

## 修饰函数(常见的)

### `__attribute__(constructor) func()`

被修饰的这个[`函数`]会在 `main()` 函数之前执行, 类似于构造函数.

### `__attribute__(destructor) func()`

被修饰的这个[`函数`]会在 `main()` 函数结束或 `exit()` 函数调用后执行.

---

### `__attribute__(weak) func()`

被修饰的这个[`函数`]为若函数