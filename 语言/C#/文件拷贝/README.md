# 文件拷贝

```c#
string path1 = @"c:\SoureFile.txt";
string path2 = @"c:\NewFile.txt";
try {
    FileInfo fi1 = new FileInfo(path1);
    FileInfo fi2 = new FileInfo(path2);

    //创建路径1文件
    //using (FileStream fs = fi1.Create()) { }

    if (!File.Exists(path1)) {
        Console.WriteLine("要拷贝的文件不存在：" + path1);
        return;
    }

    //路径2文件如果存在，就删除
    //if (File.Exists(path2)) {
    //    fi2.Delete();
    //}

    //path2 替换的目标位置
    //true 是否替换文件，true为覆盖之前的文件
    fi1.CopyTo(path2,true);
} catch (IOException ioex) {
    Console.WriteLine(ioex.Message);
}
```