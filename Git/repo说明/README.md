# repo笔记

repo是Android为了方便管理多个git库而开发的Python脚本。repo的出现，并非为了取代git，而是为了让Android开发者更为有效的利用git。

Android源码包含数百个git库，仅仅是下载这么多git库就是一项繁重的任务，所以在下载源码时，Android就引入了repo。 Android官方推荐下载repo的方法是通过Linux curl命令，下载完后，为repo脚本添加可执行权限

## 使用方法

- 默认安装并且配置好 `Git` , 如果没有需要执行下命令配置:

  - 安装 `repo`

    ```shell
    sudo apt-get install repo
    ```

  - 安装 `curl`

    ```shell
    sudo apt-get install curl
    ```

  - 安装 `git`

    ```shell
    sudo apt-get install git
    ```

  - 配置 `git` ( `yourname` 和 `your-email-address` 可以随便填)

    ```shell
    git config --global user.name "iotxiaohu"
    git config --global user.email "iotxiaohu@qq.com"
    git config --global credential.helper store
    ```

- 安装repo工具

    ```shell
    curl https://gitee.com/oschina/repo/raw/fork_flow/repo-py3 > repo
    sudo cp repo /usr/local/bin/repo
    sudo chmod a+x /usr/local/bin/repo
    sudo pip install -i https://pypi.tuna.tsinghua.edu.cn/simple requests
    ```

- 通过repo下载

     ```shell
     repo init -u xxx.git -b master --no-repo-verify
     repo sync -c
     ```
