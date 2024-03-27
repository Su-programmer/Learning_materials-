# docker 源码编译

- `docker` 源码分为 `client` 端和 `daemon` 端
- `client` `git clone https://github.com/docker/cli.git`
- `daemon` `git clone https://github.com/moby/moby.git`

## 文件说明

- 以下为链接文件
`docker-containerd-shim -> containerd-shim`
`docker-containerd -> containerd`
`docker-runc -> runc`
`dockerd -> dockerd-dev`

指向关系可以理解成是同一个文件

`Docker daemon` 启动之后就会启动 `dockerd` `containerd`

| 文件              | 说明                                                                                                                                |
| ----------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
| `dockerd`         | `Docker daemon` 启动之后启动的 守护进程                                                                                             |
| `containerd`      | `Docker daemon` 启动之后启动的进程, 真正实现容器创建, 运行, 销毁等各类操作的组件, 它也包含了独立于dockerd的镜像下载, 上传和管理功能 |
| `containerd-shim` | `containerd` 创建的                                                                                                                 |
| `runc`            | `containerd`需要创建运行容器时, 它没有直接运行runc,而是运行了`containerd-shim`,再由`containerd-shim`间接的运行`runc`                |
| `docker`          | 既是整套技术和产品的名称, 又是其中一个组件的名称                                                                                    |

`docker-init`        所有孤儿进程的父进程
`docker-proxy`          用来做端口映射的
