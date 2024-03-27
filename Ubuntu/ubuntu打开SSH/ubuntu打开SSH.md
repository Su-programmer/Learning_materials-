# ubuntu打开SSH

| 名称        | 命令                                |
| ----------- | ----------------------------------- |
| 安装        | `sudo apt-get install openssh-server` |
| 启动        | `sudo service ssh start`            |
| 查询状态    | `sudo service ssh status`           |
| 重启服务1/2 | `sudo /etc/init.d/ssh stop`         |
| 重启服务2/2 | `sudo /etc/init.d/ssh start`        |

**备注 :** 重启服务一步完成 `sudo service ssh restart`