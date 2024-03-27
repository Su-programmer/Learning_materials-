# Read the Docs笔记

| 安装                                  |
| ------------------------------------- |
| `sudo apt install git`                |
| `sudo apt install make`               |
| `sudo apt install python3`            |
| `sudo apt install python3-pip`        |
| `pip3 install -U Sphinx`              |
| `pip3 install sphinx-autobuild`       |
| `pip3 install sphinx_rtd_theme`       |
| `pip3 install recommonmark`           |
| `pip3 install sphinx_markdown_tables` |

- 执行 `sphinx-quickstart` 构建
- 语言 : `zh_CN`

|              |                                                                                   |
| ------------ | --------------------------------------------------------------------------------- |
| `Makefile`   | 可以看作是一个包含指令的文件，在使用 make 命令时，可以使用这些指令来构建文档输出  |
| `build`      | 生成的文件的输出目录                                                              |
| `make.bat`   | Windows 用命令行                                                                  |
| `_static`    | 静态文件目录，比如图片等                                                          |
| `_templates` | 模板目录                                                                          |
| `conf.py`    | 存放 Sphinx 的配置，包括在 sphinx-quickstart 时选中的那些值，可以自行定义其他的值 |
| `index.rst`  | 文档项目起始文件                                                                  |

- `conf.py`

```shell
...
html_theme = 'sphinx_rtd_theme'
...
extensions = [
    'recommonmark',
    'sphinx_markdown_tables'
]
...
```
