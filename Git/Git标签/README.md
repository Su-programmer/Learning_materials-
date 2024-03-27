# Git标签

- 常见操作

| 名称                     | 命令                        |
| :----------------------- | :-------------------------- |
| 查看标签                 | `git tag`                   |
| 查看标签`v1.*`           | `git tag -l "v1.*"`         |
| 标签信息与提交信息       | `git show v1.0`             |
| 打 `v2.0` 标签           | `git tag v2.0`              |
| 打 `v2.0` 标签并添加信息 | `git tag -a v2.0 -m "info"` |
| **给`9fceb02`补打标签**  | `git tag -a v1.2 9fceb02`   |
| **提交`v1.2`标签到仓库** | `git push origin v1.2`      |
| **提交所有标签到仓库**   | `git push origin --tags`    |

## 创建标签

- `git tag -a v1.0 -m "这是标签信息"`
- `-a` 创建标签, `v1.0`标签名
- `-m` 添加标签信息

## 删除标签

- 删除标签(并不会删除远程标签)
`git tag -d v1.1`

- 删除远程标签(方法1)
`git push origin :refs/tags/v1.1`

- 删除远程标签(方法2)
`git push origin --delete v1.1`

## 检出标签

- `git checkout 2.0.0`

> 这会使你的仓库处于 `分离头指针(detached HEAD)`的状态 - 这种状态会使你在这个上面的提交不被跟踪, 只能通过Hash值找回来

---

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
