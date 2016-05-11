# -*- coding: utf-8 -*-
# @Author: xiaoh
# @Date:   2016-02-27 20:54:40
# @Last Modified by:   xiahei
# @Last Modified time: 2016-03-19 21:07:33


class Time60(object):

    'time60 - track hours and minutes'

    def __init__(self, hr, Min):
        'time60 constructor - track hours and minutes'
        self.hr = hr
        self.min = Min

    def __str__(self):
        'time60 - string representation'
        return '%d:%d' % (self.hr, self.Min)

    __repr__ = __str__

    def __add__(self, other):
        'time60 - overloading the addition operator'
        return self.__class__(self.hr + other.hr, self.Min + other.Min)

    def __iadd__(self, other):
        'time60 - overloading in place addition'
        self.hr += other.hr
        self.Min += other.Min
        return self
