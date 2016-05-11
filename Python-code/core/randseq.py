# -*- coding: utf-8 -*-
# @Author: xiaoh
# @Date:   2016-02-27 21:03:37
# @Last Modified by:   xiaoh
# @Last Modified time: 2016-02-27 22:13:01
from random import choice


class randseq(object):

    def __init__(self, seq):
        self.data = seq

    def __iter__(self):
        return self

    def next(self):
        return choice(self.data)

# `__iter__`仅返回`self`,这就是如何将一个对象声明为一个迭代器的方式
#，最后，调用next来得到迭代器中连续的值。这个迭代器的唯一亮点是他没有终点
#这个例子可以无穷迭代，因为无损的饿读取一个序列，所以他是不会越界的，每次调用
#next时，他会得到下一个迭代值，但是不会引发StopIteration异常。

# 任意项迭代
class AnyIter(object):
    def __init__(self, data, safe=False):
        self.safe = safe
        self.iter = iter(data)

    def __iter__(self):
        return self

    def next(self, howmany=1):
        retval = []
        for eachitem in range(howmany):
            try:
                retval.append(self.iter.next())
            except StopIteration:
                if self.safe:
                    break
                else:
                    raise
        return retval
