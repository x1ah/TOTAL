# coding: utf-8

# # ex 7-1
# update()

# # ex7-2
# 字典的键必须是可哈希的对象，想一些可变类型就不能作为字典的键

# # ex 7-3
# d = {'h': 1, 'e': 2, 'l': 3, 'o': 5}
# s =  sorted(d.keys())
# print s

# for i in s:
# 	print d[i]

# 	print 'key:', i, 'value:', d[i]

# # ex7-4

# L1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
# L2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i']

# d = {}
# for k in L2:
#     d[k] = L1[L2.index(k)]

# print d


# ex7-5
import usrpw

# ex 7-7
d1 = {'a': 1, 'b': 2, 'c': 3, 'd': 4}
d2 = {}
for k in d1:
    v = d1.get(k)
    d2[v] = k
print d1, '\n', d2

# ex7-8
d = {'tom': 153, 'jack': 324, 'john': 321, 'honey': 143, 'lucy': 325}
for k in sorted(d):
    print k, ':', d[k]

for v in sorted(d.values()):
    for k in d:
        if d[k] == v:
            print k, ':', v

# ex7-9
just replace()


# ex 7-10
import string
letters = string.letters[:26]

def rot13(codestring):
    s = ''
    for L in codestring:
        if L in letters[:13]:
            s += chr(ord(L)+13)
        elif L in letters[13:]:
            s += chr(ord(L)-13)
        else:
            s += ' '
    return s

if __name__ == '__main__':
    string = raw_input('Enter string to rot13; This is a short sentence.  ')
    print "your string to an/decrpty was: [%s]"  %string
    print "Tehe rot13 string is: [%s]" %rot13(string)

# # ex 7-11
# 字典中的键由python中的可哈希对象组成，

# # ex 7-12
# 在数学上，集合是指具有某种特定性质的具体的或抽象的对象汇总成的集体，这些对象称为该集合的元素
# 在python里面，集合值有不同元素组成的集合，集合对象是一组无序的可哈希值对象，集合的元素可以当做字典的键

# # ex7-13
# 很多答案并没有对集合进行过多的解释，所以，这里也不对集合进行过多的解释或者讲解，对于集合，只需了解了解便可。
