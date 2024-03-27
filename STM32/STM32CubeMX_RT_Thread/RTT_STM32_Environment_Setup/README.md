# RT-Thread——STM32——环境搭建

---

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---

## 概述
本教程主要根据官方推荐的教程进行环境搭建，但是在打包方面按照自己的习惯进行了打包。
RT-Thread官网有特别详细的教程，这儿就不详细说明[RT-Thread官网](https://www.rt-thread.org/index.html)

---

## 软件准备

- **MDK528a (Keil5)**
- **CubeMx_v5-2-0**
- **STM32CubeMx的支持包**

以下是我百度网盘已经下好的资源，大家可以直接拿来使用

- MDK528a (Keil5) 链接：https://pan.baidu.com/s/1YzJu6tvmIbE15H_ClGJDYg 提取码：4tgh
- CubeMx_v5-2-0   链接：https://pan.baidu.com/s/1N1ctSAH81GQZHszZ5YwYaA 提取码：zlwx
- STM32CubeMx的支持包  链接：https://pan.baidu.com/s/1eJyHNHOP0nEbOMOlJ9jV8A 提取码：m7jy

大家也可以去官网下载，可以借鉴我以前写的一个博文,不过建议大家下载和我一样的版本。
[STM32CubeMx(Keil5)开发之路——0准备篇](https://blog.csdn.net/weixin_41294615/article/details/85156504)

---

## RT-Thread代码准备

大家可以直接进入RT-Thread的官网进行下载 [RT-Thread官网](https://www.rt-thread.org/index.html)
也可以使用我百度网盘已经下载好的资源
- ```rt-thread.rar``` 链接：https://pan.baidu.com/s/1-3dHO-sJed5LK5FsKjGxfg 提取码：j555
- 打开```./bsp/stm32/docs```文件夹，你会看到关于移植需要的几乎所有教程，如下图所示，这里不做详细说明。
![图片](1.png)

---

## 项目简介

我的目录结构和官方的不太一样，这里做一些简要说明
- 项目工程位于```bsp\stm32_f103_zet6_template\STM32F103ZET6```目录下
- 可以更改目录中```stm32_f103_zet6_template```的名称为自己想要的名称（不含中文）
- 只要把这个```stm32_f103_zet6_template```文件夹及其文件里的文件放进其他RTT版本的bsp下面依然能够运行
- 我在项目工程文件下面建立了```m_app```文件夹，以后我自己创建的文件都放这个文件夹下面
- 以后教程的每个项目我将保留整个RTT的目录结构

---
## 小结
建议大家按照官方教程重新移植一遍，体验一下移植的过程，这样有助于加深印象。

---

## 源代码获取

**<font size=5 color=#ff0000> 源码已放到码云 ! ! ! ( 请点击文首链接进入仓库 ) </font>**

---

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
