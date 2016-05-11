#!/usr/bin/env python
#coding=utf-8

import re
# 15-1
usrstring = raw_input('Input the string you want match: ')
patt = r'[bh][aiu]t'
try:
    print 'match succeed...'
    print re.findall(patt, usrstring)
except AttributeError:
    print 'no match'
# 15-2
patt = r'^.+\s.+$'

# 15-3
patt = r'^.+,\s.$'

# 15-4
patt = r'^[a-zA-z_]\w*$'

# 15-5
patt = r'^\d\d\d\d(\s[a-zA-Z]+)+'

# 15-6
patt = r'^www\.\w+(\.com|\.edu|\.net)$'

# 15-7
patt = r'^\d+$'

# 15-8
patt = r'^\d+L$'

# 15-9
patt = r'^\d+\.\d$'

# 15-10
patt = r'^(\d+\+)?\dj$'

# 15-11
patt = r'^\w+@\w+\.com'

# 15-12
patt = r'http://\w+(.\w+)*$'

# 15-13
patt = r'(\'.+\')'

# 15-14
patt = r'1[0-2]'

# 15-15
patt = r'^(\d{4})-(\d{4}\d?\d?)-(\d{4}\d?)(-\d{4})?$'

# 15-16
from random import randint, choice
from string import lowercase
import time
from time import ctime
import re

doms = ('com', 'edu', 'net', 'org', 'gov')
with open('redata.txt', 'w') as f:
    for i in range(randint(5, 10)):
        dtint = randint(0, int(time.time())-1)
        dtstr = ctime(dtint)

        shorter = randint(4, 7)
        em = ''
        for j in range(shorter):
            em += choice(lowercase)

        longer = randint(shorter, 12)
        dn = ''
        for j in range(longer):
            dn += choice(lowercase)


        datastr = '%s::%s@%s.%s::%d-%d-%d\n' \
            % (dtstr, em, dn, choice(doms), dtint, shorter, longer)
        print datastr
        f.write(datastr)
print 'write completed..'

# 15-17

with open('redata.txt', 'r') as datafile:
    patt = '^\w{3}'
    weeklist = []
    for line in datafile:
        time_patt = r'\b::(\d+)-\b'
        time_second = int(re.search(time_patt, line).group(1))
        time_str = re.search(r'^(.+\d{4})::', line).group(1)
        if ctime(time_second) == time_str:
            print 'time strip equal to time string...'
        else:
            print 'warning! time strip not equal to time string...'
        # combine with 15-18
        weeklist.append(re.search(patt, line).group())

for week in set(weeklist):
    print week, 'append ', weeklist.count(week), 'times...'

# 15-19
# patt = re.search(time_patt, line).group(1)

# 15-20
# patt = re.search(r'::(.+)::', line).group(1)

# 15-21
patt = re.search(r'\s(\w{3})\s', line).group(1)

# 15-22
patt = re.search(r'\b\s(\d{4})::\b', line).group(1)

# 15-23
patt = re.search(r'\b\s(\d{2}:\d{2}:\d{2})\s\b', line).group(1)

# 15-24
patt = re.search(r'::(.+)@(.+)::', line).groups()

# 15-25
patt = r'::(.+)@(.+)\.(\w{3})::'

# 15-26
myemail = 'xiah9696@gmali.com'
otheremail = re.search(r'::(.+)::', line).group(1)
re.sub(otheremail, myemail, line)

# 15-27
patt = re.search(r'\b\s(\d{2}):(\d{2}):(\d{2})\s\b', line).groups()

# 15-28
patt = r'(\d{3}-)?\d{3}-\d{4}|\(\d{3}\)\s\d{3}-\d{3}'
