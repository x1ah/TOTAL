# coding: utf-8

# #ex 8-1
# (A)ACE
# (b)ADE
# (c)ABE

# # ex 8-2
# f = int(raw_input('input the start: '))
# t = int(raw_input('input the end: '))
# i = int(raw_input('input the increment: '))

# while f <= t:
#     print f
#     f += i

# # ex 8-3
# (a)range(10)
# (b)range(3, 19, 3)
# (c)range(-20, 1000, 220)

# # ex 8-4
# def isprime(num):
#     count = num / 2
#     while count > 1:
#         if num % count == 0:
#             return False
#             break
#         count -= 1
#     else:
#         return True

# # ex 8-5
# def getfactors(num):
#     count = num / 2
#     fac_List = []
#     while count > 0:
#         if not (num % count):
#             if count not in fac_List:
#                 if count != (num / count):
#                     fac_List.append(count)
#                     fac_List.append(num/count)
#                 else:
#                     fac_List.append(count)
#         count -= 1
#     fac_List.sort()
#     return fac_List

# # # ex 8-6
# def getfactors(number):
#     if isprime(number):
#         fList.append(number)  # 如果是素数的话就是本身了
#     else:
#         for i in range(2, number):
#             if number % i == 0:
#                 fList.append(i)
#                 number = number / i
#                 getfactors(number)
#                 break      #进行递归
#             else:
#                 continue
#     return fList


# if __name__ == '__main__':
#     while True:
#         fList = []
#         number = int(raw_input("inout a number: "))
#         print getfactors(number)

# # ex8-7

# def isperfect(num):
#     total = 0
#     L = getfactors(num)
#     for i in L[:-1]:
#         total += i
#     if total == num:
#         return 1
#     else:
#         return 0

# if __name__ == '__main__':
#     num = int(raw_input('input a intege number: '))
#     print isperfect(num)

# # ex 8-8
# def factorial(N):
#     total = 1
#     if N > 0:
#         for i in range(1, N+1):
#             total *= i
#     else:
#         print 'input a num which bigger than zero'
#     return total

# if __name__ == '__main__':
#     N = int(raw_input('input a number bigger than zero: '))
#     print factorial(N)

# # ex 8-9
# def fastFib(n, memo):
#    #global numCalls
#    # numCalls += 1
#    print 'fib1 called with', n
#    if n not in memo:
#        memo[n] = fastFib(n-1, memo) + fastFib(n-2, memo)
#    return memo[n]

# if __name__ == '__main__':
#     memo = {1:1, 2:1}
#     n = int(raw_input('input a number: '))
#     print fastFib(n, memo)
#     print memo

# # ex8-10
# def f(sentence):
#     vChar, vowel, word, consonant = 'aeiou', 0, 0, 0
#     for eChar in sentence:
#         if eChar.isalpha():
#             if eChar in vChar:
#                 vowel += 1
#             else:
#                 consonant += 1
#     return (vowel, consonant, len([eword for eword in sentence.split()]))

# if __name__ == '__main__':
#     sentence = raw_input('input a sentence: \n')
#     print f(sentence)

# # ex 8-11
# def dealfile():
#     names_list = []
#     Wrong_times = 0
#     num_people = int(raw_input('Enter total number of names: '))
#     for i in range(num_people):
#         Input = 'please enter name %d :' %i
#         names = raw_input(Input)
#         if len(names.split(',')) == 2:
#             names_list.append(names)
#             continue
#         else:
#             True_format = ','.join(names.split())
#             print "Wrong format ... should be ", True_format
#             names_list.append(True_format)
#             Wrong_times += 1
#             print "You have done this %d times already. Fixing input..." \
#             % Wrong_times

#     print "The sorted list (by last name) is:\n"
#     names_list.sort()
#     for name in names_list:
#         print "\t", name

# if __name__ == '__main__':
#     dealfile()

# # ex 8-12
# # coding: utf-8
# def dec2bin(num):
#     binList = []
#     while num > 1:
#         binList.append(divmod(num, 2)[1])
#         num = divmod(num, 2)[0]
#     else:
#         binList.append(num)
#     return ''.join([str(bit) for bit in reversed(binList)])

# def main(s, e):
#     if e > 33 and e < 256:
#         print "DEC\tBIN\tOCT\tHEX\tASCII"
#         print '-' * 30
#         for i in xrange(s, e+1):
#             print "%s\t%s\t%s\t%s\t%s" %(i, dec2bin(i), oct(i), hex(i), chr(i))
#     elif e < 33:
#         print "DEC\tBIN\tOCT\tHEX"
#         print '-' * 30
#         for i in xrange(s, e+1):
#             print "%s\t%s\t%s\t%s\t" %(i, dec2bin(i), oct(i), hex(i))

# if __name__ == '__main__':
#     print u'输入起始值： ',
#     s = int(raw_input())
#     print u'输入起始值： ',
#     e = int(raw_input())
#     print main(s, e)

# # ex8-13
# 通过序列像迭代时，每次迭代都会从头开始遍历一遍序列，而通过序列索引迭代时，每次迭代都是从某一该位置开始，不需要再遍历序列。


