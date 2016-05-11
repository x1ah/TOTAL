##桌面图标显示不正常原因以及解决方法
- 在终端依次输入以下命令

```
taskkill /im explorer.exe /f
cd /d %userprofile%\appdata\local
del iconcache.db /a
start explorer.exe
exit
```

- 以上方法的具体意思为先结束Explorer资源管理器，然后删除缓存文件，然后重新运行资源管理器的一个过程。

- 按照上述的步骤，用户通过运行命令行自动删除系统内的缓存，这样重新刷新下桌面图标就能够恢复正常了，系统缓存过多会影响系统的运行速度，用户需要偶尔清理下系统缓存，保证系统顺畅运行。

- 闰年年份判别方法： 
- 1，能被400整除。
- 2，能被4整除且不能被100整除。

##操作系统下载：`MSDN我告诉你`操作系统下载。

##解决VMware出现如下错误问题：
```
VMware Workstation cannot connect to the virtual machine. Make sure you have rights to run the program, access all directories the program uses, and access all directories for temporary files.

The VMware Authorization Service is not running。
```
- 在控制面板搜索管理工具，双击 **服务** 再双击 **VMware Autheffication** ，将自动改为自动（延迟启动），确定。完成。
