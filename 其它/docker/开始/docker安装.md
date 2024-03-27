# docker 安装

---

[toc]

---

#### 环境配置

- 卸载`docker` ( 可选 )
    `sudo apt-get remove docker docker-engine docker.io containerd runc`
    </br>

- 更新 apt 包索引
    `sudo apt-get update`
    </br>

- 安装 apt 依赖包，用于通过HTTPS来获取仓库

    ```shell
    sudo apt-get install \
        apt-transport-https \
        ca-certificates \
        curl \
        gnupg \
        software-properties-common
    ```

- 添加 Docker 的官方 GPG 密钥：
    `curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg`
    </br>

---

- 设置稳定版仓库

    ```shell
    echo \
    "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu \
    $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
    ```

#### 安装`docker` (包安装)

- [下载.ded文件](https://download.docker.com/linux/ubuntu/dists/)

`https://download.docker.com/linux/ubuntu/dists/bionic/pool/stable/amd64/`

- 下载类似下面三个文件

|                        下载                         |
| :-------------------------------------------------: |
|          `containerd.io_1.4.9-1_amd64.deb`          |
| `docker-ce-cli_20.10.8~3-0~ubuntu-bionic_amd64.deb` |
|   `docker-ce_20.10.8~3-0~ubuntu-bionic_amd64.deb`   |
|                  **安装上面3个包**                  |
|                `sudo dpkg -i *.deb`                 |

#### 后续

| 操作                                  | 命令                            |
| ------------------------------------- | ------------------------------- |
| 查看版本                              | `docker version`                |
| 同上                                  | `docker info`                   |
| 验证                                  | `sudo docker run hello-world`   |
| 创建docker组 ( 为了省略 `sudo` 命令 ) | `sudo groupadd docker`          |
| 将您的用户添加到docker组中            | `sudo usermod -aG docker $USER` |
| 立即生效                              | `newgrp docker`                 |

- 如果这项服务没有启动，可以用下面的命令启动

    ```shell
    sudo service docker start
    或
    sudo systemctl start docker
    ```

---
