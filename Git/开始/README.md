# Git开始

## 开始

| 名称                       | 命令                                          |
| -------------------------- | --------------------------------------------- |
| 下载git                    | `apt-get install git`                         |
| 查看 git 版本              | `git --version`                               |
| **基本配置**               |                                               |
| 配置个人的用户名称         | `git config --global user.name iotxiaohu`     |
| 配置电子邮件地址           | `git config --global user.email iotxiaohu`    |
| 查看配置信息               | `git config --list`                           |
| 忽略文件mode的影响         | `git config --add core.filemode false`        |
| 取消换行符的自动转换       | `git config --global core.autocrlf false`     |
| 使用vim编辑器              | `git config --global core.editor "vim"`       |
| 解决`git bash`中文显示数字 | `git config --global core.quotepath false`    |
| **Git生成添加公钥**        |                                               |
| 生成公钥(一直回车)         | `ssh-keygen -t rsa -C "iotxiaohu"`            |
| 查看公钥                   | `cat ~/.ssh/id_rsa.pub`                       |
| **检出某个仓库**           |                                               |
| 克隆github上面的项目       | `git clone https://github.com/xxx.git`        |
| 克隆远端仓库的项目         | `git clone username@host:/path/to/repository` |
| **查询相关**               |                                               |
| 比较状态                   | `git status`                                  |
| 比较状态(-s 减短结果)      | `git status -s`                               |
| 查询最近3次提交信息        | `git log -3`                                  |
| 查询简要的提交信息         | `git log --pretty=format:"%h : %s"`           |
| 显示分支信息               | `git log --graph`                             |
| `---`                      | `---`                                         |
| 只克隆某个tag              | `git clone -b [tag] --depth=1 [git地址]`      |
| 只克隆某个tag              | `git clone -b [tag] [git地址]`                |
|                            |                                               |

[Git生成添加公钥码云指导连接](https://gitee.com/help/articles/4181#article-header0)

- <font color=#ff0000>M</font> 表示 `工作区` 和 `暂存区` 不一样
- <font color=#00ff00>M</font> 表示 `暂存区` 和 `仓库` 不一样

### 软件汉化

- 加压下载好的`git-gui-zh-master.zip`
- `Git\mingw64\share\git-gui\lib\msgs`目录下放入如下文件

```shell
README.md
zh_cn.msg
```

---

### 中文乱码

在安装目录 `*\Git\etc\gitconfig` 后面添加如下文字

```shell
[gui]
encoding=utf-8
```

---

### `gitgui`中文乱码

- `编辑` `->` `选项` `->` `默认文件内容编码` `->` `utf-8`

---
