# ubuntu环境配置

---

## 更新软件源

`sudo apt-get update`

---

## 更新 apt-get

`sudo apt-get upgrade`

| 安装的功能  | 命令                                 |
| ----------- | ------------------------------------ |
| `vim`       | `sudo apt-get install vim`           |
| `GCC`       | `sudo apt-get install gcc`           |
| `G++`       | `sudo apt-get install g++`           |
| `make`      | `sudo apt-get install make`          |
| `cmake`     | `sudo apt install cmake`             |
| `zip`       | `sudo apt-get install zip`           |
| `cmake-gui` | `sudo apt-get install cmake-qt-gui`  |
| `安装nfs`   | `sudo apt install nfs-kernel-server` |
|             |                                      |

---

## 安装 menuconfig

```shell
sudo apt-get install build-essential
sudo apt-get install libncurses5
sudo apt-get install libncurses5-dev
```

---

## 安装其他

`sudo apt-get install zlib*`
`sudo apt-get install libffi-dev`

---

## 生效环境变量

`source ~/.bashrc`

---

## 安装 `scons`

- 1 `sudo apt-get install scons`
- 2 `pip install scons==4.0.1`

```shell
wget http://prdownloads.sourceforge.net/scons/scons-2.2.0.tar.gz
tar zxvf scons-2.2.0.tar.gz
cd scons-2.2.0
python setup.py install
```

---

## 安装`java jdk`

|               |                                           |
| ------------- | ----------------------------------------- |
| `卸载jdk`     | `sudo apt-get remove openjdk*`            |
| `安装 jdk`    | `sudo apt install openjdk-8-jdk-headless` |
| `安装openjdk` | `sudo apt install openjdk-11-jdk`         |
| `查询`        | `java -version`                           |

---

## 安装openjdk

- 更新软件源 `sudo apt-get update`
- 安装openjdk8
`sudo apt-get install openjdk-8-jdk`
</br>

- 通过 `which java` 找到java安装路径
- 我这里找到的是 /usr/bin/java

- 打开文件 `~/.bashrc` 尾部加入
`sudo vim ~/.bashrc`

```shell
export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
export JRE_HOME=${JAVA_HOME}/jre
export CLASSPATH=.:${JAVA_HOME}/lib:${JRE_HOME}/lib
export PATH=${PATH}:${JAVA_HOME}/bin
```

- 重启系统
- 检测是否安装成功
`java -version` or `java` or `javac`

---

## lfs

|           |                                |
| --------- | ------------------------------ |
| `安装git` | `sudo apt-get install git`     |
| `安装lfs` | `sudo apt-get install git-lfs` |
| `安装git` | `sudo apt-get install git`     |

---

## 安装python特定版本

- 卸载python3 `sudo apt-get remove python3`
- 或者 `sudo apt autoremove python3`
- 查看python的路径 `which python3.8`
- 重新安装python ( `/usr/bin/python3.8` 为 `which python3.8` 的打印结果 )

```shell
cd /usr/bin
sudo rm python
sudo rm python3
sudo ln -s /usr/bin/python3.8 python
sudo ln -s /usr/bin/python3.8 python3
python3 --version
python --version
```

- 安装python3

```shell
tar -xvzf Python-3.8.5.tgz
cd Python-3.8.5/
sudo ./configure
sudo make
sudo make install
```
