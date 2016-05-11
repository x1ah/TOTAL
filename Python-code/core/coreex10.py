# -*- coding: utf-8 -*-
# ex10-6


def safe_open(filename, mode):
    try:
        f = open(filename, mode)
    except IOError:
        f = None
    return f

if __name__ == "__main__":
    f = safe_open('world.py', 'r')
    print f

# ex10-8


def safe_raw_input():
    try:
        R = raw_input('input something:')
    except (EOFError, KeyboardInterrupt):
        R = None
    return R

if __name__ == '__main__':
    print safe_raw_input()
# ex10-9
import math


def safe_sqrt(x):
    try:
        s = math.sqrt(x)
    except (ValueError):
        s = complex('%fj' % math.sqrt(abs(x)))
    return s

if __name__ == '__main__':
    x = int(raw_input('input a number: '))
    print safe_sqrt(x)
