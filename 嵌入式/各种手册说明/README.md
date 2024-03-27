# 各种手册说明

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

## 参考手册 / 芯片手册 (Reference Manual)

- 介绍各个模块外设的功能, 寄存器等

> 参考目录

```shell
1 文档约定
2 存储器和总线架构
3 嵌入式 Flash 接口
4 CRC 计算单元
5 电源控制器 (PWR)
6 复位和时钟控制 (RCC)
7 通用 I/O (GPIO)
8 系统配置控制器 (SYSCFG)
9 DMA 控制器 (DMA)
10 中断和事件
11 模数转换器 (ADC)
12 数模转换器 (DAC)
13 数字摄像头接口 (DCMI)
14 高级控制定时器（TIM1 和 TIM8）
15 通用定时器（TIM2 到 TIM5）
16 通用定时器（TIM9 到 TIM14）
17 基本定时器（TIM6 和 TIM7）
18 独立看门狗 (IWDG)
19 窗口看门狗 (WWDG)
20 加密处理器 (CRYP)
21 随机数发生器 (RNG)
22 散列处理器 (HASH)
23 实时时钟 (RTC)
24 控制器区域网络 (bxCAN)
25 内部集成电路 (I2C) 接口
26 通用同步异步收发器 (USART)
27 串行外设接口 (SPI)
28 安全数字输入/输出接口 (SDIO)
29 以太网 (ETH)：通过 DMA 控制器进行介质访问控制 (MAC)
30 全速 USB on-the-go (OTG_FS)
31 高速 USB on-the-go (OTG_HS)
32 灵活的静态存储控制器 (FSMC)
33 调试支持 (DBG)
34 设备电子签名
```
---

## 数据手册 / 规格书（Data Sheet）

> 参考目录

```shell
1 简介
2 说明
3 引脚排列和引脚说明
4 内存映射
5 电气特性
6 包装信息
7 订购信息
附录 A 应用框图
```

## 编程手册 STM32 Cortex®-M4 MCU...

介绍内核的文档

> 参考目录

```shell
1 关于本文件
1.1 排版约定
1.2 寄存器缩写列表
1.3 关于STM32 Cortex-M4处理器和核心外设
2 Cortex-M4 处理器
2.1 程序员模型
2.2 内存模型
2.3 异常模型
2.4 故障处理
2.5 电源管理
3 STM32 Cortex-M4 指令集
3.1 指令集总结
3.2 CMSIS 内在函数
3.3 关于指令说明
3.4 内存访问指令
3.5 一般数据处理说明
3.6 乘除指令
3.7 饱和指令
3.8 装箱拆箱说明
3.9 位域说明
3.10 浮点指令
3.11 其他说明
4 核心外设
4.1 关于STM32 Cortex-M4内核外设
4.2 内存保护单元（MPU）
4.3 嵌套向量中断控制器（NVIC）
4.4 系统控制块（SCB）
4.5 SysTick 定时器（STK）
4.6 浮点单元（FPU）
```

## 勘误手册（Errata Sheet）

描述了芯片某些功能的局限性，并给出解决办法。这个手册也比较重要，有时候我们
我们觉得有些地方调试老是出问题的时候，就需要查找一下了，看看是否给出了解决方案。

```shell
1 具有 FPU 限制的 Arm® 32 位 Cortex®-M4
1.1 Cortex®-M4 中断加载到堆栈指针会导致错误行为
1.2 使用非常短的 ISR 时，VDIV 或 VSQRT 指令可能无法正确完成
2 STM32F40x 和 STM32F41x 芯片限制
2.1 系统限制
2.2 TIM 限制
2.3 IWDG 外设限制
2.4 RTC 限制
2.5 I2C 外设限制
2.6 SPI 外设限制
2.7 I2S 外设限制
2.8 USART 外设限制
2.9 bxCAN 限制
2.10 OTG_FS 外设限制
2.11 以太网外设限制
2.12 FSMC 外设限制
2.13 SDIO 外设限制
2.14 ADC 外设限制
2.15 DAC 外设限制
```

## 闪存编程手册（Flash Programming Manual）

对芯片片上闪存的操作指南、读写保护设置，选项字节信息

## 内核编程手册（Cortex-M Programming Manual）

对内核的系统控制块寄存器的描述。

## 应用文档（Application Note）

针对不同应用主题的描述性文档；常常有与其搭配的固件例程。应用文档的重要性不言而喻，很
多时候官方对于一些用于做出了一些解决方案，都会在应用文档里面进行说明

## 用户手册（User Manual）

一般是对某个软件库的说明文档
