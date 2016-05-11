# -*- coding: utf-8 -*-
# @Author: xiahei
# @Date:   2016-03-15 18:29:23
# @Last Modified by:   xiahei
# @Last Modified time: 2016-03-16 13:37:07
import os
from sys import argv

print 'current dir =====> ' , os.getcwd()
script, newfile = argv
if os.path.exists(os.getcwd()+'/'+newfile):
    print 'file already exists...'
elif newfile.endswith('.py'):
    f = open(newfile, 'w')
    f.write('#!/usr/bin/env python\n')
    f.write('#coding=utf-8\n')
    f.close()
    print 'created...'
else:
    temp = open(newfile, 'w')
    temp.close()
    print 'created ', newfile
