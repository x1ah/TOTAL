# -*- coding: utf-8 -*-
# @Author: xiaoh
# @Date:   2016-02-27 23:11:41
# @Last Modified by:   xiaoh
# @Last Modified time: 2016-02-27 23:53:01

class NumStr(object):

    def __init__(self, num=0, string=''):
        self.__num = num
        sefl.__string = string

    def __str__(self):          # for str()
        return '[%d :: %r]' % (self.__num, self.__string)

    __repr__ = __str__      # for repr()

    def __add__(self, other):       # for self + other
        print '__add__ called ', other
        if isinstance(other, NumStr):
            return self.__class__(self.__num + other.__num, self.__string + \
             other.__string)        # return 之后相当于NumStr(**, **)
        else:
            raise TypeError

    def __mul__(self, num):         # for a * b
        if isinstance(num, int):
            return self.__class__(self.__num * num, self.__string * num)
        else:
            raise TypeError

    def __nonzero__(self):      #返回False 。覆盖了原本的__nonzero__方法
        return self.__num or len(self.__string)

    def __norm_cval(self, cmpres):
        return cmp(cmpres, 0)

    def __cmp__(self, other):           # define cmp()
        return self.__norm_cval(cmp(self.__num, other.__num)) + \
            self.__norm_cval(cmp(self.__string, other.__string))
