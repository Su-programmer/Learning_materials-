# ubuntu虚拟机固定ip地址

- `sudo vi /etc/network/interfaces`

```c
auto ens33              # en01 网卡名称
iface eno1 inet static
address 192.168.0.133   # IP地址， 要根据自己网段下IP的使用设置，不能和别的IP相冲突
netmask 255.255.255.0
gateway 192.168.0.255   # 网关
dns-nameserver  8.8.8.8 114.114.114.114
```

- 重启生效
