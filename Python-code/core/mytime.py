#!/usr/bin/env python
# coding=utf-8
class mytime(object):
    'mytime - track hours and minutes'

    def __init__(self, hr, min):
        'mytime codstructor - takes hoursrs and minutes'
        self.hr = hr
        self.min = min

    def __str__(self):
        'time - string repr'
        return '%d:%d' % (self.hr, self.min)

    __repr__ = __str__

    def __add__(self, other):
        'time - overloading the addition operator'
        return self.__class__(self.hr+other.hr, self.min+other.min)

    def __iadd__(self, other):
        'time - overloading the additionon '
        self.hr += other.hr
        self.min += other.min
        return self

