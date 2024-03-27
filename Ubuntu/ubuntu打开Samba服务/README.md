# 打开Samba服务

- 安装Samba
    `sudo apt-get install samba`
    </br>

- 查看Samba是否安装成功, 输入`samba`:

    ```shell
    $ samba
    [2021/02/23 16:30:17.065666,  0] ../lib/util/debug.c:947(reopen_logs_internal)
    Unable to open new log file '/var/log/samba/log.%m': Permission denied
    [2021/02/23 16:30:17.065698,  0] ../source4/smbd/server.c:372(binary_smbd_main)
    samba version 4.3.11-Ubuntu started.
    Copyright Andrew Tridgell and the Samba Team 1992-2015
    ```

- 备份smb.conf

    ```shell
    sudo cp /etc/samba/smb.conf  /etc/samba/smb.conf.bak
    gdbcommands  smb.conf  smb.conf.bak  tls
    ```

- 配置smb.conf
    `sudo gedit /etc/samba/smb.conf`
    </br>

- 添加如下内容 ( iotxiaohu 改为自己的用户名 )

    ```shell
    [share]
        comment = share home directory
        path = /home/iotxiaohu
        create mask = 0777
        directory mask = 0777
        public = yes
        writable = yes
        valid users = iotxiaohu
        browseable = yes
    ```

- 增加Samba用户 ( iotxiaohu 改为自己的用户名 )
    `sudo smbpasswd -a iotxiaohu`
    </br>

- 重新启动samba
    `sudo service smbd restart`
    </br>

- 至此已经OK了 ! ! !

---

## windows的配置

- 访问 `\\192.168.0.123` <ubuntu的路径>，直接可以访问就结束了，否则执行下面的步骤
- `编辑组策略`->`计算机配置`->`管理模板`->`网络`->`Lanman工作站` ->`启用不安全的来宾登录` ->`启用`
- `编辑组策略`->`计算机配置`->`Windows设置`->`安全设置`->`本地策略`->`安全选项`->`Microsoft网络服务器：对通信进行数字签名（始终）`->`禁用`
- `Windows功能`-> `SMB 1.0 / CIFS文件共享支持`-> `SMB 1.0 / CIFS客户端`-> `勾选上`
- `右键`->`我的电脑`->`映射网络驱动器`-> `在文件夹中填 \\192.168.0.123 <ubuntu的路径>` -> `勾选“使用其他凭据连接”` -> `完成`

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
