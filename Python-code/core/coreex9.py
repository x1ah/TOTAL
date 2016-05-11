# coding: utf-8

# # ex 9-1
# fobj = open('***')
# for eachLine in fobj:
#     if not eachLine.strtswith('#'):
#         print eachLine

# # ex 9-2

# file_name = raw_input('Input the file name: ')
# Input_lines = int(raw_input('How many lines you want print: '))
# fobj = open(file_name)
# for lines in fobj:
#     if Input_lines:
#         print lines
#         Input_lines -= 1
#     else:
#         break
#

# # ex 9-3
# file_name = raw_input('Input the filenames: ')
# print len([lines for lines in open(file_name)])

# # ex 9-4
# file_name = open(raw_input("Input the file you want open: \n"), 'r+')
# while True:
#     for i in range(25):
#         print file_name.readline()
#     if file_name.readline() == '':
#         break
#     raw_input('Press any keys to continue...')

# #  ex 9-5
# #ex6-4
# scores = {9: 'A', 8: 'B', 7: 'C', 6: 'D'}
# L = []
# n = 0
# while True:
#    score = int(raw_input('input your score:'))
#    if score/10 > 8:
#        print scores[9]
#    elif score/10 < 6:
#        print "F"
#    else:
#        print scores[score/10]
                                                                    # it's so dificult I can't finished it
#    L.append(score)
#    choose = raw_input('averge or test:').strip()[0].lower()
#    if choose == 'a':
#        for i in range(len(L)):
#            n += L[i]
#        print float(n)/len(L)
#    elif choose == 't':
#        continue
#    else:
#        print 'oh, you are so foolish,run it again!'
#        break

# # ex 9-6

# file_one = open(raw_input('Input the first file: '))
# file_two = open(raw_input('Input the second file: '))
# temp = False
# lines = 0
# while not temp:
#     lines += 1
#     F_one = file_one.readline()
#     F_two = file_two.readline()
#     if F_one == F_two:
#         continue
#     else:
#         temp = True
#         print 'diference at line ', lines


# ex 9-7
# 这道题没有看懂，解析什么东西，题意表达不清晰。

# # ex 9-8
# import os

# have_doc = []
# none_doc = []
# os.chdir('D:/Python27/Lib')
# cwd = os.getcwd()
# all_files = os.listdir(cwd)
# #print all_files
# for files in all_files:
#     if files[-3:] == '.py':
#         if '__doc__' in dir(files[:-3])          #查找是否含有doc
#                 have_doc.append(files)
#                 break
#             else:
#                 none_doc.append(files)
#                 break
#         temp.close()

# print "Those module have __doc__:", have_doc
# print "And Those module have not __doc__:", none_doc
# print "Let to see what contant this module.."
# for module in have_doc:
#     print '*' * 30
#     modules = importlib.import_module(module[:-3])
#     print "module ", modules
#     print modules.__doc__
#


# #ex 9-8
# #模块研究. 提取模块的属性资料. 提示用户输入一个模块名(或者从命令行接受输入).
# #然后使用 dir() 和其它内建函数提取模块的属性, 显示它们的名字, 类型, 值

# while True:
#     module = raw_input('Input a module: ')
#     exec 'import ' + module
#     print dir(module)


# # ex 9-7
# section = {}
# with open(r'c:\windows\win.ini') as f:
#     for item in f:
#         if item.startswith(';'):
#             continue
#         if item.startswith('['):
#             data = {}
#             name = item[1:item.rfind(']')]
#             section[name] = data
#             continue
#         if item.count('=') > 0 and data != None:
#             index = item.find('=')
#             key = item[0:index]
#             value = item[index+1:].strip()
#             data[key] = value
# print section

# ex 9-9
#get a list of modules
from os import chdir, listdir
path = r'D:/python27/Lib'
chdir(path)
ls = [item for item in listdir(path) if item.endswith('.py')]
db = {}.fromkeys(ls)

#scan __doc__ in modules
for item in ls:
    with open(item) as f:
        doc = ''
        start = False
        for line in f:
            if line.strip().startswith('"""') and not start:
                start = True
                doc += line
                if doc.strip().endswith('"""') and len(doc.strip()) > 3:
                    start = False
                    break
            elif line.strip().endswith('"""'):
                start = False
                doc += line
                break
            elif start:
                doc += line
        db[item] = doc
empty = []
full = []
for key in sorted(db):
    if db[key] == '':
        empty.append(key)
    else:
        full.append(key)

print 'moudles without doc:'
for item in empty:
    print item,

print
print 'moudles with doc:'
for item in full:
    print item,

print
print 'values:'
for key in full:
    print '*' * 100
    print 'module: ', key
    print 'doc: ', db[key]

# # ex9-13
# from sys import argv
# for item in argv:
#     print item

# # ex 9-15
# def copies(c_from, c_to):
#     with open(c_from, 'r') as f:
#         with open(c_to, 'a') as s:
#             for item in f:
#                 s.write(item)

# if __name__ == '__main__':
#     c_from = raw_input("copy from : ")
#     c_to = raw_input("copy to: ")
#     copies(c_from, c_to)

#　ex 9-16
