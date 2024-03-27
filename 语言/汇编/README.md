# 说明

|             |     |           |
| ----------- | --- | --------- |
| `PRESERVE8` |     | 8字节对齐 |
|             |     |           |

---

## 常见指令代码

```s
Stack_Size      EQU     0x00000400                          ; EQU 定义 Stack_Size 为 0x400 字节
                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size                          ; 开辟一个栈空间大小为 Stack_Size 的内存空间
__initial_sp                                                ; 开辟空间顶部做个标记, 以后这个地址就代表这个空间的顶部, 即栈顶
```

- `AREA` AREA 段名 属性1 属性2 属性N
  - `CODE` 属性 定义代码段, 默认为 READONLY
  - `DATA` 属性 定义数据段, 默认为 READWRITE
  - `READONLY` 只读属性
  - `READWRITE` 可读可写属性
  - `ALIGN` 属性 ALIGN表达式. 在默认时, ELF的代码段和数据段是按字对齐的, 取值范围为[0, 31]对齐方式为 2^2^
  - `COMMON` 属性 定义一个通用的段, 不包含任何的用户代码和数据. 各源文件中同名的COMMON段共享同一段存储单元

---

```s
Heap_Size       EQU     0x00000200                          ; EQU 定义 Stack_Size 为 0x400 字节
                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base                                                 ; __heap_base 为堆空间的开始
Heap_Mem        SPACE   Heap_Size                           ; 开辟堆空间
__heap_limit                                                ; __heap_limit 为堆顶
```

---

```s
_Vectors    DCD     __initial_sp                ; 也就是之前的 0x08000000
            DCD     Reset_Handler               ; 向下类推就是 0x08000004
            DCD     NMI_Handler
            ...
            DCD     DMA2_Channel2_IRQHandler    ; DMA2 Channel2
            DCD     DMA2_Channel3_IRQHandler    ; DMA2 Channel3
            DCD     DMA2_Channel4_5_IRQHandler  ; DMA2 Channel4 & Channel5
__Vectors_End
```

- 定义中断向量表
- `DCD` 分配一段字的内存单元, 理解为C语言中的取地址 `&Reset_Handler`

---

```s
; Reset handler
Reset_Handler   PROC                                ; PROC 代表程序开头
                EXPORT  Reset_Handler       [WEAK]  ; [WEAK] 弱函数, 如果其他地方有Reset_Handler, 那你就别用我了
                IMPORT  __main                      ; 外部函数 __main
                IMPORT  SystemInit                  ; 外部函数 SystemInit
                LDR     R0, =SystemInit             ; SystemInit 地址给R0
                BLX     R0                          ; [跳转到 SystemInit] - [THUMB -> ARM] - [回来]
                LDR     R0, =__main                 ; __main 地址给R0
                BX      R0                          ; 跳转到 SystemInit
                ENDP                                ; ENDP 代表程序结束
```

---

```s
NMI_Handler PROC
            EXPORT  NMI_Handler             [WEAK]  ; [WEAK] 弱函数
            B       .                               ; 跳向自己, 相当于死循环 while(1){}
            ENDP
```
