# 利用frp实现内网穿透

> **前提条件:** 你得有一台有公网ip的服务器

- 根据服务器版本下载对应的安装包 [点击进入](https://github.com/fatedier/frp/releases)

![图片](1.png)

---

## 服务端

| ip            | 暴露端口 |
| ------------- | -------- |
| `55.66.77.88` | `3389`   |

- 修改 `frps.ini`

    ```shell
    [common]
    bind_port = 3389 # 为开放的端口
    ```

- 方法1 启动服务器
    `./frps -c frps.ini`
    </br>
- 方法2 后台自动运行
    `nohup ./frps -c ./frps.ini &`
    </br>

---

## 客户端操作

- 修改 `frpc.ini`

    ```shell
    [common]
    server_addr = 55.66.77.88   # 服务器ip
    server_port = 3389          # 服务器开放的端口

    [ssh]
    type = tcp
    local_ip = 127.0.0.1        # 客户端暴露的ip
    local_port = 22             # 端口
    remote_port = 6000          # 对远端暴露的端口
    ```

- 启动客户端
    `./frpc -c ./frpc.ini`
    </br>

---

## 测试

- 服务器 连接 本地客户端的 `SSH`

    `ssh -oPort=6000 iotxiaohu@127.0.0.1`
    </br>

---

## 自启动程序

### 服务端自启动

- 新建文件 `frps.service`

```shell
[Unit]
Description=frp service
After=network.target

[Service]
TimeoutStartSec=30
ExecStart=/usr/local/frp_0.37.1_linux_amd64/frps -c /usr/local/frp_0.37.1_linux_amd64/frps.ini
ExecStop=/bin/kill $MAINPID

[Install]
WantedBy=multi-user.target
```

- 启动服务
    `sudo systemctl start frps`
    </br>

- 服务开机自启动
    `sudo systemctl enable frps`
    </br>

### 客户端自启动

- 新建文件 `frpc.service`

```shell
[Unit]
Description=frp client
After=network.target

[Service]
TimeoutStartSec=30
ExecStart=/usr/local/frp_0.37.1_linux_amd64/frpc -c /usr/local/frp_0.37.1_linux_amd64/frpc.ini
ExecStop=/bin/kill $MAINPID

[Install]
WantedBy=multi-user.target
```

- 启动服务
    `sudo systemctl start frpc`
    </br>

- 服务开机自启动
    `sudo systemctl enable frpc`
    </br>
