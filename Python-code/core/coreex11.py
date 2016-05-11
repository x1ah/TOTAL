# !/usr/bin/env python
# coding=utf-8
# # 11-1

# def countToFour1():
#     for eachNum in range(5):
#         print eachNum,

# def countToFour2(n):
#     for eachNum in range(n, 5):
#         print eachNum,

# def countToFour3(n=1):
#     for eachNum in range(n, 5):
#         print eachNum,

# print "Input\tcountToFour1\tcountToFour2\t\tcountToFour3"
# for i in [2, 4, 5]:
# print i, '\t', countToFour1(), '\t', countToFour2(i), '\t\t',
# countToFour3()

# 11-2
# pass

# 11-3
# 题意表达不清晰，pass。

# # 11-4

# def my_time(T):
#     Hour = T / 60
#     M = T % 60
#     return "%d minute is %d hours and %d minute" % (T, Hour, M)

# try:
#     T = int(raw_input("Input a number present minute: "))
#     print my_time(T)
# except ValueError, KeyboardInterrupt:
#     print 'oh, please input right!!'

# # 11-5
# def Tax(money, rate=0.15):
#     print 'total money is :', money
#     print 'the Tax rate is :', rate
#     print 'should pay tax :',
#     return money * rate

# print Tax(500)

# ex 11-6
# 又是不理解题目意思。so sorry。

# # ex 11-7

# def my_map(a, b):
#     return a, b

# print map(my_map, [1, 2, 3], ['abc', 'def', 'ghi'])
# '''answer two'''
# print zip([1, 2, 3], ['abc', 'def', 'ghi'])

# # ex 11-8

# def leapYear(Y):
#     if (Y % 100 == 0) and (Y % 400 == 0):
#         return True
#     elif (Y % 4 == 0) and (Y % 100 != 0):
#         return True
#     else:
#         return False

# YearList = [1900, 2100, 2400, 2025, 2014, 2016, 4, 100]
# print filter(leapYear, YearList)

# '''列表解析代替函数式编程'''

# print [i for i in YearList if leapYear(i) is True]

# # ex 11-9

# def average(x, y): return x+y

# print reduce(average, range(100))/100.0

# # ex 11-10

# 这段代码表示的是当前folded路径下面的所有文件里面只返回当前目录的文件。

# # ex 11-11
# import os
# from os import path

# def clear_file(File):
#     if path.isfile(File):
#         print "we prepare clear the file....."
#         File_path = path.dirname(File)              # 当前文件所在的目录，方便在同一目录创建一个新的文件。
#         f = open(File, 'r')
#         New_path = File_path + '\NewFile'               # 需要清理的文件清理后新建的文件名字。
#         New_File = open(New_path, 'w')
#         for line in map(lambda x: x.strip(), f):    # 去除前后空格。
#             New_File.write(line+'\n')
#         f.close()
#         New_File.close()
#         try:
#             choice = raw_input('[C]reate a new one or [O]vercast:')
#             if choice.strip()[0] == 'o':
#                 os.remove(File)
#                 os.rename(New_path, File)
#             elif choice.strip()[0] == 'c':
#                 pass
#             else:
#                 raise KeyboardInterrupt

#         except:
#             return "There are some Input Error!!"
#         return "finished..."
#     else:
#         return "No such file..."

# if __name__ == '__main__':
#     File = raw_input("Input the file need clear:")
#     print clear_file(File)

# ex 11-12
#
#import time
# def timeit(func, argv):
#    try:
#        begin = time.time()
#        a = func(argv)
#        end = time.time()
#    except TypeError:
#        begin = time.time()
#        a = func()
#        end = time.time()
#    print "total time is %f s..." % (end - begin)
#    print "The func return :", a
#
# ex 11-13
#
# a)
#def mult(x, y): return x * y
#
# b)
# def b(n):
#    return reduce(mult, range(1, n))       # n-1的阶乘
#
# c)
# def c(n):
#    return reduce(lambda x, y: x * y, range(n))
#
# d)
# print "#b) function use time: ", timeit(b, 100)
# print "#c) lambda use time: ", timeit(c, 100)
#
# ex 11-14
#
# def Fib(n, memo):
#    if not (n in memo):
#        memo[n] = Fib(n-1, memo) + Fib(n-2, memo)
#    return memo[n]
#
# def fibl(n):
#    global memo
#    memo = {1:1, 2:1}
#    return Fib(n, memo)
#
#n = 100
#res = fibl(n)
# for i in memo:
#    print i, '-' * 8,  memo[i]
#
# ex 11-15
#
#from operator import add, sub, mul, div
#from random import randint, choice
#
#ops = {'+': add, '-': sub, '*': mul, '/': div}
#MAXTRIES = 2
#
#
#
# def doprob():
#    op = choice('-+*/')
#    nums = [randint(1, 10) for i in range(2)]
#    nums.sort(reverse=True)
#    ans = ops[op](*nums)
#    pr = '%d %s %d = ' % (nums[0], op, nums[1])
#    oops = 0
#    while True:
#        try:
#            if int(raw_input(pr)) == ans:
#                print 'correct'
#                break
#            if oops == MAXTRIES:
#                print 'answer\n%s%d' % (pr, ans)
#            else:
#                print 'incorrect...try again'
#                oops += 1
#        except (KeyboardInterrupt, EOFError, ValueError):
#            print 'invalid input ... try again'
#
#
# def main():
#    while True:
#        doprob()
#        try:
#            opt = raw_input('Again? [y]').lower()
#            if opt and opt[0] == 'n':
#                break
#        except (KeyboardInterrupt, EOFError):
#            break
#
# if __name__ == '__main__':
#    print 'hello world'
#    main()
print('hello wrold')
