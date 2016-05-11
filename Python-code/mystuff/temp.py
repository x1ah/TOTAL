#-*- coding: utf-8 -*-
#回文
def cilly():
    res = []
    done = False
    while not done:
        ele = raw_input("please input ")
        if ele == '':
            done = True
        else:
            res.append(ele)
    temp = res[::-1]  ## Mark it
    print "res", res, "temp:", temp
##    temp.reverse()
##    print "res",res, "temp",temp
    if temp == res:
        print "it's a huiwen"
    else:
        print "it's not huiwen"
##binary search to find bugs
