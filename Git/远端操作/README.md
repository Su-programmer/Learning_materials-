# Git远端操作

| name               | key                                                      |
| ------------------ | -------------------------------------------------------- |
| 查看仓库关联       | `git remote -v`                                          |
| 添加远端仓库       | `git remote add origin https://github.com/xienb/NPC.git` |
| 强制推送上去       | `git push --force origin master`                         |
|                    | `git push -f`                                            |
| push到相应的分支名 | `git push [origin/其他] [分支名]`                        |

---

```shell
git remote [-v | --verbose]
       git remote add [-t <branch>] [-m <master>] [-f] [--[no-]tags] [--mirror=<fetch|push>] <name> <url>
       git remote rename <old> <new>
       git remote remove <name>
       git remote set-head <name> (-a | --auto | -d | --delete | <branch>)
       git remote set-branches [--add] <name> <branch>...
       git remote get-url [--push] [--all] <name>
       git remote set-url [--push] <name> <newurl> [<oldurl>]
       git remote set-url --add [--push] <name> <newurl>
       git remote set-url --delete [--push] <name> <url>
       git remote [-v | --verbose] show [-n] <name>...
       git remote prune [-n | --dry-run] <name>...
       git remote [-v | --verbose] update [-p | --prune] [(<group> | <remote>)...]
```

## 备注

<div align=center><a href="https://gitee.com/iotxiaohu/blog">
    <img width="800" src="https://gitee.com/iotxiaohu/image/raw/master/gitee_vx/gitee_vx.png"/>
</a></div>

---
