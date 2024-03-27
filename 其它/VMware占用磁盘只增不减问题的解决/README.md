# VMware占用磁盘只增不减问题的解决

## 在虚拟机下面操作

- 在虚拟机下面执行 ( 清除残留的安装包也可以不执行此步 )
    ```
    sudo apt-get clean
    ```
- 然后执行 ( 将碎片空间填充上0, 结束的时候会提示磁盘空间不足, 忽略即可 )
    ```
    sudo dd if=/dev/zero of=/0bits bs=20M
    ```
- 再执行 ( 删除填充 )
    ```
    sudo rm  /0bits
    ```

---

## 关闭虚拟机, 在windows下操作

- 在`vmware-vdiskmanager.exe`所在的目录 ( 一般是VM的目录 ) 打开`powershell` 执行以下命令

    ```
    .\vmware-vdiskmanager.exe -k (你的虚拟机磁盘路径)
    ```

- 如:

    ```
    .\vmware-vdiskmanager.exe -k D:\Ubuntu1804\Ubuntu1804.vmdk
    ```

- 此时你会发现虚拟机所占磁盘减少了很多

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
