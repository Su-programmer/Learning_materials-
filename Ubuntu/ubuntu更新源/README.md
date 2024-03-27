# ubuntu更新源

因为有 "墙" 的限制, 使用国内的网络访问国外的 "源" 会有诸多限制, 因此在安装 ubuntu 之后往往会更新 "源".

- 以 `ubuntu18.04` 更改为 `阿里源` 为例, 下面简述一下具体的更新步骤:
- 备份原文件 ( 可选 - 备份是一个好习惯, 防止改得连母亲都不认识了 )

    ```
    sudo cp /etc/apt/sources.list /etc/apt/sources.list.back
    ```

- 修改系统文件 `sources.list`
  - `方法一` 通过命令行的方式修改:

    ```
    sudo vi /etc/apt/sources.list
    ```

  - `方法二` 如果采用的是 ubuntu桌面版 也可以使用如下方法:

    ```
    sudo gedit /etc/apt/sources.list
    ```

- 清空文件, 添加如下内容:

    ```
    # 阿里源 ubuntu 18.04
    deb http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted universe     multiverse
    deb http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted universe     multiverse
    deb http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted universe     multiverse
    deb http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted universe     multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe     multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted     universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted     universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted     universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted     universe multiverse
    ```

- 输入如下命令进行更新:

    ```
    sudo apt-get update
    sudo apt-get upgrade
    ```

---

## 其他的源

    ```
    # 阿里源Ubuntu 20.04
    deb http://mirrors.aliyun.com/ubuntu/ focal main restricted
    deb http://mirrors.aliyun.com/ubuntu/ focal-updates main restricted
    deb http://mirrors.aliyun.com/ubuntu/ focal universe
    deb http://mirrors.aliyun.com/ubuntu/ focal-updates universe
    deb http://mirrors.aliyun.com/ubuntu/ focal multiverse
    deb http://mirrors.aliyun.com/ubuntu/ focal-updates multiverse
    deb http://mirrors.aliyun.com/ubuntu/ focal-backports main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ focal-security main restricted
    deb http://mirrors.aliyun.com/ubuntu/ focal-security universe
    deb http://mirrors.aliyun.com/ubuntu/ focal-security multiverse
    ```

    ```
    # 阿里源Ubuntu 16.04
    deb http://mirrors.aliyun.com/ubuntu/ trusty main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-security main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-updates main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-proposed main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-backports main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-security main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-updates main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-proposed main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-backports main restricted universe multiverse
    ```

    ```
    # 阿里源Ubuntu 14.04
    deb http://mirrors.aliyun.com/ubuntu/ trusty main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-security main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-updates main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-proposed main restricted universe multiverse
    deb http://mirrors.aliyun.com/ubuntu/ trusty-backports main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-security main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-updates main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-proposed main restricted universe multiverse
    deb-src http://mirrors.aliyun.com/ubuntu/ trusty-backports main restricted universe multiverse
    ```

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
