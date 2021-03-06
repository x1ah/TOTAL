# 多线程编程

## 线程和进程

### 进程
- 计算机程序是磁盘中的可执行的二进制文件数据，只有在被读取到内存中被操作系统调用的时候才开始他们的生命周期，进程是程序的一次执行。

### 线程
- 所有的线程运行在同一个进程中，共享相同的运行环境，或者是可以说是在主进程或“主线程”中并行的“迷你进程”。
- 线程一般都是并发进行的。
- I/O密集型的python程序比计算密集型的程序更能充分利用多线程环境的好处。
- 避免使用thread模块。
    + 更高级别的threading模块更为先进，对线程支持更为完善。
    + 使用thread模块里的属性有可能会与threading出现冲突。
    + threading会保证所有的子线程都退出后才会退出，而thread不会，所有的线程都会被强制结束掉，没有警告也没有正常的清除工作。
