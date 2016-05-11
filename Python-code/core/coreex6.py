# #-*- coding: utf-8 -*-
# #ex6-1


# print '使用in 可以判断小的字符串是否在大的字符串里面'


# #ex6-2

# import string
# import keywor
# alphas = string.letters + '_'
# nums = string.digits

# print 'Welcome to the Identifier Checker v1.0'
# print 'Testees must be at least 2 chars long'
# while True:
#    myInput = raw_input('Identifier to test?')
#    if len(myInput) == 1:
#        if myInput[0] in alphas:
#            print 'it\'s a one length mark'
#        else:
#            print 'it\' not a mark'
#    if myInput in keyword.kwlist:
#        print ' it is a key word'
#    else:
#        print 'it\'s not a keyword'

# #ex6-3
# while True:
#    a = raw_input('\nplease input a series of number: ')
#    n = len(a)
#    L = list(a)
#    for i in range(n):
#        for j in range(n - 1):
#            if L[j] > L[j+1]:
#                L[j], L[j+1] = L[j+1], L[j]
#    for s in L:
#        print s,


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

#    L.append(score)
#    choose = raw_input('averge or test:')
#    if choose == 'average':
#        for i in range(len(L)):
#            n += L[i]
#        print float(n)/len(L)
#    elif choose == 'test':
#        pass
#    else:
#        print 'oh, you are so foolish,run it again!'
#        break


# # ex6-5
# while True:
#    string = raw_input('input a your string:')
#    n = len(string)
#    for i in range(n):
#        print string[i:i+3]

# #ex6-6
# def instead(string):
#    n = len(string)
#    for i in range(n):
#        if string[i] != ' ':
#            print string[i:]
#            break


# #ex6-7
# #找出不能整除输入数的数
# num_str = raw_input('Enter a number: ')
# num_num = int(num_str)
# fac_list = range(1, num_num+1)
# print "BEFORE:", fac_list
# i = 0
# L = []
# while i < len(fac_list):
#    if num_num % fac_list[i] != 0:
#        L.append(fac_list[i])

#    i += 1

# print "AFTER: ", L

# # ex 6-8
# lowten = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven',\
#          8: 'eight', 9: 'nine', 10: 'ten'}
# bigten = {11: 'eleven', 12: 'twelve', 13: 'thirteen', 14:'fourteen', 15: 'fifteen',\
#          16: 'sixteen', 17: 'seventeen', 18: 'eighteen', 19: 'nineteen', 20: 'tweten'}
# bigger = {3: 'thirth', 4: 'fourty', 5:'fifty', 6: 'sixty', 7: 'seventy',\
#          8: 'eighty', 9: 'ninety'}

# def lowhun(a):
#    if a < 11:
#        print lowten[a]
#    elif a < 21:
#        print bigten[a]
#    elif a < 100:
#        print bigger[a/10], lowten[a%10]
#    else:
#        int('error')
#    return 'finished!'
# def bighun(a):
#    if a % 100 == 0:
#        print lowten[a/100], 'hundred'
#    else:
#        print lowten[a/100], 'hundred and', lowhun(a%100)
#    return 'finished!'
# while 1:
#    num = raw_input('input a number within 1000 and bigger than 0: ')
#    n = int(num)
#    if n >= 100:
#        bighun(n)
#    else:
#        lowhun(n)


# # ex 6-9
# mint = int(raw_input('input the minute: '))
# hour = mint / 60
# print "it's %d hour and %d minute" %(hour, mint-60*hour)

# ex6-10
# import string
# mystring = raw_input('input a string: ')
# up = string.letters[:26]
# low = string.letters[26:]
# for i in mystring:
#     if i in low:
#         mystring = mystring.replace(i, i.upper())
#     elif i in up:
#         mystring = mystring.replace(i, i.lower())
#     else:
#         pass
# print mystring

# # ex6-12
# def findchr(string, char):
#     L = len(string)
#     if char not in string:
#         return -1
#     else:
#         for i in range(L):
#             if string[i] == char:
#                 print i,
#         return '\n'

# def rfindchr(string, char):
#     L = len(string)
#     if char not in string:
#         return -1
#     else:
#         for i in range(L):
#             if string[L-i : L-i+1] == char:
#                 return L-i

# def subchr(string, origchr, newchar):
#     L = len(string)
#     if char not in string:
#         return -1
#     else:
#         for i in range(L):
#             if string[i] == char:
#                 string = string.replace(string[i], newchar)
#         return string


# while 1:
#     string = raw_input("input a string: ")
#     char = raw_input("input the char you want find: ")
#     newchar = raw_input('input the newchar: ')
#     print rfindchr(string, char)
#     print findchr(string, char)
#     print subchr(string, char, newchar)

# # ex6-13
# def atoc(string):
#     L = string.split('+')
#     real = float(L[0])
#     imagine = float(L[1][:-1])
#     return complex(real, imagine)

# string = raw_input('input a complex: ')
# print atoc(string)

# #ex 6-14
# from random import randint
# def Rochambeau():
#     computer = randint(1, 3)
#     usr = int(raw_input('input the sign within --> 1:shears, 2:stone, 3:cloth '))
#     sign = {1:'shears', 2: 'stone', 3:'cloth'}
#     judge = {('stone','shears'): 'Win',('stone','stone'): 'draw', ('stone','cloth'): 'lose',
#                 ('shears','stone'): 'lose', ('shears','shears'): 'draw', ('shears','cloth'): 'win',
#                 ('cloth','stone'): 'lose', ('cloth','shears'): 'lose', ('cloth','cloth'): 'draw'}
#     print "you choose %s, computer choose %s, and the result is: %s" %(sign[usr], sign[computer], judge[sign[usr], sign[computer]])
#     continued = raw_input('do you want again? [y/n]:')
#     while continued == 'y':
#         Rochambeau()


# if __name__ == "__main__":
#     Rochambeau()

# # ex6-15
# # a
# def convertDate (allDate):
#     aYear = int(allDate.split("/")[-1])
#     aMonth = int(allDate.split("/")[0])
#     aDay = int(allDate.split("/")[1])
#     return (aYear,aMonth,aDay)

# if __name__ == "__main__":
#     import datetime
#     Dt = raw_input("Enter a date ...\n")
#     D1 = datetime.date(convertDate(Dt)[0],convertDate(Dt)[1],convertDate(Dt)[2])
#     Dt = raw_input("Enter another date ...\n")
#     D2 = datetime.date(convertDate(Dt)[0],convertDate(Dt)[1],convertDate(Dt)[2])
#     print (D2 - D1).days

# # b
# def convertDate (allDate):
#     aYear = int(allDate.split("/")[-1])
#     aMonth = int(allDate.split("/")[0])
#     aDay = int(allDate.split("/")[1])
#     return (aYear,aMonth,aDay)

# if __name__ == "__main__":
#     import datetime
#     birthTime = raw_input("Enter Your borth date ...\n")
#     D1 = datetime.date(convertDate(birthTime)[0],convertDate(bothTime)[1],convertDate(birthTime)[2])
#     print (datetime.date.today() - D1).days


# # c
# def convertDate (allDate):
#     aYear = int(allDate.split("/")[-1])
#     aMonth = int(allDate.split("/")[0])
#     aDay = int(allDate.split("/")[1])
#     return (aYear,aMonth,aDay)

# if __name__ == "__main__":
#     import datetime,time
#     birthTime = raw_input("Enter Your borth date ...\n")
#     if convertDate(birthTime)[1] > int(time.strftime('%m')):
#         nextBirth = datetime.date(int(time.strftime('%Y')),convertDate(birthTime)[1],convertDate(birthTime)[2])
#     elif convertDate(birthTime)[1] == int(time.strftime('%m')):
#         if convertDate(birthTime)[2] > int(time.strftime('%d')):
#             nextBirth = datetime.date(int(time.strftime('%Y')),convertDate(birthTime)[1],convertDate(birthTime)[2])
#         else:
#             nextBirth = datetime.date(int(time.strftime('%Y')) + 1,convertDate(birthTime)[1],convertDate(birthTime)[2])
#     else:
#         nextBirth = datetime.date(int(time.strftime('%Y')) + 1,convertDate(birthTime)[1],convertDate(birthTime)[2])
#     print (nextBirth - datetime.date.today()).days
#



# # ex6-16
# #matrix
# S = [[0]*3 for n in range(3)]
# M = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
# N = [[10, 11, 12], [13, 14, 15], [16, 17, 18]]
# for i in range(len(M)):
#     for j in range(len(M[0])):
#         S[i][j] = M[i][j] + N[i][j]
# print 'M:\t', M, '\nN:\t', N
# print 'M + N :\t', S


# S = [[0]*3 for n in range(3)]
# for i in range(len(M)):
#     for j in range(len(N[0])):
#         for k in range(len(M[0])):
#             S[i][j] += M[i][k] * N[k][j]
# print 'M * N :\t', S


# # ex 6-17
# def myPop(List):
#     if len(List) == 0:
#         print 'it\'s a null list'
#         return
#     else:
#         print List[-1]
#         List.remove(List[-1])
#         return List

# a = [1, 2, 3, 4, 5, 5, 6, 7]
# print myPop(a)

# #ex 6-18
# zip(ln, fn)返回的是一个列表，列表的第一个元素是ln和fn 的第一个元素元组，第二个元素是fn 和ln 的第二个元素的元组，以此类推

# ex 6-19

# def output(seq, distance, formats):
#     longth = len(seq)/distance                          #如果没有多出来的字符，每一行应该正常输出的字符数
#     more = len(seq) % distance                          #判断多出来的字符，需要额外的在行末
#     L = 0                                               #为了下面方便表示按行输出时的序列index
#     N = 0                                               #为了下面方便表示按列是厨师的序列index
#     if formats == 'horizontal':
#         for i in range(distance - more):
#             print seq[L:(L+longth)]
#             L += longth
#         for i in range(distance-more, distance):
#             print seq[L:(L+longth+1)]
#             L += longth + 1
#     # elif formats == 'vertical':
#     #     for i in range(longth + more):            __over__ here
#     #         for j in range(distance):                          it's so fuck!
#     #             print seq[N],                                              shit
#     #             N += longth                                                   don't try to change my code
#     #                                                                              ok!

# a = range(1, 101)
# distance = int(raw_input('input the distance: '))
# formats = raw_input('you only can choose \'horizontal\'')
# print output(a, distance, formats)




# def output(mlist,col,v=False):
#     row=(len(mlist)+col-1)/col
#     R=[[0 for x in range(col)] for y in range(row)]
#     i=0
#     if not v:
#         for x in range(row):
#             for y in range(col):
#                 if i>=len(mlist):
#                     R[x].remove(0)
#                     continue
#                 R[x][y]=mlist[i]
#                 i+=1
#     elif v:
#         flag=0
#         last_row_c=len(mlist)%col
#         for y in range(col):
#             if y>last_row_c-1 and last_row_c!=0 and flag==0:
#                 R[row-1].remove(0)
#                 row-=1
#                 flag=1
#             for x in range(row):
#                 R[x][y]=mlist[i]
#                 i+=1
#     for i,x in enumerate(R):
#         for j,y in enumerate(R[i]):
#             if j<len(x)-1:
#                 print str(y)+' ',
#             else:
#                 print str(y)+'\n',
# output([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16],3,False)

# ex 6-3(b)
# def sortDict (aDict):
#     values = aDict.values()
#     values.sort(reverse=True)
#     print values

# if __name__ == "__main__":
#     aDict = {'a':1,'d':4,'e':2,'b':3,'c':5,'f':6,'g':7}
#     sortDict (aDict)
#
