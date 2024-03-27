# 子仓库相关

## submodule

- 1. 执行命令 `git submodule add [子仓库地址] [子仓库目录]`
- 1. 执行命令(关联某个分支) `git submodule add -b [分支] [子仓库地址] [子仓库目录]`
- 2. 会得到 `.gitmodules` 文件, 内容如下:

```git
[submodule "[目录]"]
        path = [目录]
        url = [子仓库地址]
```

- 那么, 主仓库就包含了子仓库

## 下载主仓库以及子仓库

### 方法1

- `git clone --recursive [主仓库地址]`

### 方法2

- `git clone [主仓库地址]`
- `cd [仓库]`
- `git submodule update --init --recursive`

分开执行:

- `git submodule init`
- `git submodule update`

## 对子仓库的提交

- `cd [子仓库目录]`
- 按照常规方式对子仓库进行提交
- `cd [主仓库目录]`
- 按照常规方式对子仓库进行提交

## 拉取子仓库的更改

- 更新所有的字模块 `git submodule update --recursive --remote --init`
- 进入子仓库 `cd [子模块目录]`
- 进入所有的字模块, 解决冲突

```git
git checkout -b temp-branch # 创建一个新分支来保存更改
git add . # 添加更改
git commit -m "Temp commit" # 提交更改
git checkout original-branch # 切换到原始分支
git merge temp-branch # 将更改合并回原始分支
git branch -d temp-branch # 删除临时分支
```

- 进入原目录 `cd -`
- 按照常规模式进行 `add - commit - push`

---

## subtree

### 添加子仓库别名 (可选)

- `git remote add -f [别名] [子仓库地址]`

### 添加子仓库

- `git subtree add --prefix=[目录] [别名/子仓库地址] [子仓库分支]`

### 提交子仓库更改

- `git subtree push --prefix=[目录] [别名/子仓库地址] [子仓库分支]`

### 更新子仓库

- `git subtree pull --prefix=[目录] [别名/子仓库地址] [子仓库分支]`

### 删除子仓库

- `git subtree remove --prefix=[目录]`

- `--squash` 不拉去历史信息
