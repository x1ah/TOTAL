#!/usr/bin/env python
# coding=utf-8
class roundfloatmanual(object):
    def __init__(self, val):
        assert isinstance(val, float)
        'value must be a float'
        self.value = round(val, 2)

    def __str__(self):
        return '%.2f' % self.value

    __repr__ = __str__
