# `STM32CubeMx` `+` `makefile` --- 开发环境搭建

---

<div align=center>
    <img width="800" src="https://gitee.com/leafguo/image/raw/master/vx/vx.png"/>
</div>

<div align=center>
    <a href="">
        <img width="800" src="https://gitee.com/leafguo/image/raw/master/togitee/togitee.png"/>
    </a>
</div>

---

## 环境

| 工具                  | 版本                             | 说明           |
| --------------------- | -------------------------------- | -------------- |
| `开发板`              | `小熊派IoT开发板`                | `建议相同`     |
| `ubuntu`              | `16.04`                          | `版本关系不大` |
| `STM32CubeMX`         | `V6.3.0`                         | `建议相同`     |
| `L4软件包`            | `STM32Cube FW_L4 V1.16.0`        | `建议相同`     |
| `STM32CubeProgrammer` | `v2.8.0`                         | `版本关系不大` |
| `交叉编译工具链`      | `gcc-arm-none-eabi-10.3-2021.07` | `版本关系不大` |

- [小熊派IoT开发板](https://www.stmcu.com.cn/hardwaredevelopmenttools/1351)
- [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html)
- [下载交叉编译工具链](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)

---

## 安装交叉编译工具链

### 下载版本

- 按照上面的链接下载好对应的交叉编译工具链版本
- 我下载的是`gcc-arm-none-eabi-10.3-2021.07-x86_64-linux.tar.bz2`

### 解压

- 在 `ubuntu` 下新建个 `~/tools/` 目录用来存放解压的软件
- 解压缩 `tar -jxvf gcc-arm-none-eabi-10.3-2021.07-x86_64-linux.tar.bz2`

### 配置环境变量

- 修改 `~/.bashrc` 文件, 在末尾加上环境变量
    `export PATH=/home/iotxiaohu/tools/gcc-arm-none-eabi-10.3-2021.07/bin:$PATH`
    </br>
- 执行 `source ~/.bashrc` 使环境变量生效
- 执行 `arm-none-eabi-gcc -v` 如果显示版本信息说明交叉编译工具链安装成功

---
