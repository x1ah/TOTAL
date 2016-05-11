# 执行环境

## 可调用对象
### 函数
- 内建函数
    - 内建函数是用c/c++写的，然后通过编译放入python解释器。把他们作为第一内建名称高空间的一部分加载进系统
- 用户自定义函数
- lambda表达式

### 方法
- 内建方法
    - 只有内建类型有内建方法
- 用户自定义方法

### 类

### 类的实例
- 覆盖了类的`__call__(self, *args)`方法，就是的类是可调用的了。

```python
class foo:
    def __call__(self, *args):
        print args
>>>f = foo()
>>>callable(f)
True
>>>f('hello', 'world')
('hello', 'world')
```

## 代码对象

## 可执行的对象声明和内建函数
- `compile('seq', '', 'third` 通常三个参数都是必须的，第一个为需要执行的语句代码，第二个为代码的名字，第三个有三种选择，如下：
|name  | operation|
|------|----------|
|eval|可求值的表达式，跟eval一起用|
|single|单一的可执行语句，与exec一起|
|exec|可执行的语句组，和exec一起用|

## 执行其他python程序
### 导入
- 直接import导入 需要运行的程序即可，导入的副作用是导致最高级代码运行
- 可以`if __name__ == __main__`来避免

### `execfile()`
- execfile(filename, globals=globals(), locals=locals())

## 执行其他非python程序
### `os.system(cmd)` 执行terminal命令并返回状态
### `os.popen()` 该函数是文件对象和system（）的结合体,eg:

```python
>>> from os import popen
>>> f = popen('/home/xiah/Repo/test.py')
>>> data = f.readlines()
>>> f.close()
>>> print data
['#!/usr/bin/env python\n', '#coding=utf-8\n', "print 'hello world'\n", "print 'test finish'\n", "print 'test succeed'\n"]
>>> for msg in data:
...     print msg,

#!/usr/bin/env python
#coding=utf-8
print 'hello world'
print 'test finish'
print 'test succeed'
>>> 
```

### `os.fork()`

## 结束执行
### `sys.exit(), SystemExit`
- `sys.exit()`会抛出一个`SystemExit()`异常，这是唯一一个不看做错误的异常。

