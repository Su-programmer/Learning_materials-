# 添加用户相关

---

## 添加用户

```shell
sudo useradd -d "/home/hlg" -m -s "/bin/bash" hlg
```

- -d： 指定用户的主目录
- -m： 如果存在不再创建，但是此目录并不属于新创建用户；如果主目录不存在，则强制创建； -m和-d一块使用。
- -s： 指定用户登录时的shell版本

---

## 添加用户密码

```shell
sudo passwd hlg
```

---

## 只删除用户

```shell
sudo userdel hlg
```

---

## 连同用户主目录一起删除

```shell
sudo derlser -r hlg
```

---

## 添加管理员权限

### 方式一

```shell
sudo adduser hlg sudo
```

### 方式二

- 打开文件`/etc/sudoers`
- 添加以下内容

```shell
hlg ALL=(ALL:ALL) ALL
```
