#!/usr/bin/env python
#coding=utf-8

from random import randint, choice
from string import lowercase
import time
from time import ctime

doms = ('com', 'edu', 'net', 'org', 'gov')

for i in range(randint(5, 10)):
    dtint = randint(0, int(time.time()))
    dtstr = ctime(dtint)

    shorter = randint(4, 7)
    em = ''
    for j in range(shorter):
        em += choice(lowercase)

    longer = randint(shorter, 12)
    dn = ''
    for j in range(longer):
        dn += choice(lowercase)


    print '%s::%s@%s.%s::%d-%d-%d' \
        % (dtstr, em, dn, choice(doms), dtint, shorter, longer)
