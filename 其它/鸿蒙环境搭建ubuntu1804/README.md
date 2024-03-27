# 鸿蒙环境搭建

## 修改bash

- 执行一下命令 选择`No`

    ```shell
    sudo dpkg-reconfigure dash
    ```

## 下载安装python3.8

- 查看python版本

    ```shell
    python --version
    python3 --version
    ```

- 下载安装python3.8

    ```shell
    sudo apt-get install python3.8
    ```

- 查看python3.8的安装位置 ( 假如显示为 `/usr/bin/python3.8` )

    ```shell
    which python3.8
    ```

- 修改python位置
  - 一起修改 ( 注意 `/usr/bin/python3.8` 为 `which python3.8` 显示的实际值)

    ```shell
    cd /usr/bin && sudo rm python && sudo rm python3 && sudo ln -s /usr/bin/python3.8 python && sudo ln -s /usr/bin/python3.8 python3 && python3 --version && python --version
    ```

    - 单独修改 ( 注意 `/usr/bin/python3.8` 为 `which python3.8` 显示的实际值)

    ```shell
    cd /usr/bin
    sudo rm python
    sudo rm python3
    sudo ln -s /usr/bin/python3.8 python
    sudo ln -s /usr/bin/python3.8 python3
    python3 --version
    python --version
    ```

## 安装依赖

- 安装 `pip3`

    ```shell
    sudo apt-get install python3-setuptools python3-pip -y
    sudo pip3 install --upgrade pip
    ```

- 安装 `setuptools`
    `pip3 install setuptools`
    </br>

- 安装 `Kconfig`
    `sudo pip3 install kconfiglib`
    </br>

- 安装打包工具

    ```shell
    sudo apt-get install dosfstools
    sudo apt-get install mtools
    sudo apt-get install mtd-utils
    ```

## 安装其他的一些工具

- 新建文件夹 `~/developtools` 并将以下文件下载进去
- [GN工具](https://repo.huaweicloud.com/harmonyos/compiler/gn/1523/linux/gn.1523.tar)
- [ninja工具](https://repo.huaweicloud.com/harmonyos/compiler/ninja/1.9.0/linux/ninja.1.9.0.tar)
- [LLVM工具](https://repo.huaweicloud.com/harmonyos/compiler/clang/9.0.0-34042/linux/llvm-linux-9.0.0-34042.tar)
- [下载hc-gen工具](https://repo.huaweicloud.com/harmonyos/compiler/hc-gen/0.65/linux/hc-gen-0.65-linux.tar)
- [hap打包工具](https://repo.huaweicloud.com/harmonyos/develop_tools/hmos_app_packing_tool.jar)
- [hap签名工具](https://repo.huaweicloud.com/harmonyos/develop_tools/hapsigntoolv2.jar)

- 在 `developtools` 目录下执行一下命令解压

    ```shell
    tar -xvf gn.1523.tar -C ~/
    tar -xvf ninja.1.9.0.tar -C ~/
    tar -xvf llvm-linux-9.0.0-34042.tar -C ~/
    tar -xvf hc-gen-0.65-linux.tar -C ~/
    ```

- 执行以下命令打开并且修改 `~/,bashrc` 文件
    `vim ~/.bashrc`
    </br>

- 最后面添加如下内容

    ```shell
    export PATH=~/gn:$PATH
    export PATH=~/ninja:$PATH
    export PATH=~/llvm/bin:$PATH
    export PATH=~/hc-gen:$PATH
    export PATH=~/developtools:$PATH
    export PATH=~/developtools:$PATH
    ```

- 最后执行以下命令生效环境变量
    `source ~/.bashrc`
    </br>

## 安装java虚拟机

- 执行以下命令

    ```shell
    sudo apt-get install default-jre
    sudo apt-get install default-jdk
    ```
