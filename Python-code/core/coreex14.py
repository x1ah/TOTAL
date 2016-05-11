#!/usr/bin/env python
# coding=utf-8

# 14-1
# 可调用对象：函数，方法，类
# exec和eval()
# eval(obj)对obj进行求值，obj是一个已编译为代码对象的表达式，或是一个字符串表达式，可以给出全局或者局部的名称空间
# exec obj 执行obj，单一的python语句或者语句的集合，也就是说格式是代码对象或者字符串，obj也可以是一个文件对象。

# 14-2
# 略

# 14-3
# 略

# 14-4
import os
from subprocess import call

os.system('tree')
call('tree')

# 14-5
from commands import getoutput


getoutput('tree')

# 14-6
import os


f = os.popen('tree')
date = f.readlines()
f.close()
for item in date:
    print item
