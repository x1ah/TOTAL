#coding: utf-8
#def squareBootBi(x, epesilon):
#    assert x >= 0
#    assert epesilon > 0
#    low = 0
#    high = max(x, 1.0)
#    guess = (low + high)/2.0
#    ctr = 1
#    while abs(guess**2 - x) >= epesilon and ctr <= 100:
#        print 'low:', low, 'high:', high, 'guess:', guess
#        if guess**2 < x:
#            low = guess
#        else:
#            high = guess
#        guess = (low + high)/2.0
#        ctr += 1
#    assert ctr <= 100
#    print 'low:', low, 'high:', high, 'guess:', guess
###        print "not perfect square number!"
#    return guess
#def squareBootNR(x, epesilon):
#    assert x >= 0
#    assert epesilon > 0
#    x = float(x)
#    guess = x/2.0
#    guess = 0.001
#    diff = guess** 2 - x
#    ctr = 1
#    while abs(diff) > epesilon and ctr <= 100:
#      #  print 'Error', diff,  'guess:', guess
#        guess = guess - diff/(2.0*guess)
#        diff = guess**2 - x
#        ctr += 1
#    assert ctr <= 100
#    print ctr
#    ##print 'low:', low, 'high:', high, 'guess:', guess
#        print "not perfect square number!"
#    return guess

#def bsearch(s, e, first, last, calls):
#    print first, last, calls
#    if (last - first) < 2: return s[first] == e or s[last] == e
#    mid = first + (last - first)/2
#    if s[mid] == e:return True
#    if s[mid] < e: return bsearch(s, e, mid + 1, last, calls + 1)
#    if s[mid] > e: return bsearch(s, e, first, mid - 1, calls + 1)
#
#def search(s, e):
#    print bsearch(s, e, 0, len(s) - 1, 1)
#

#def bubbleSort(L):
#    for j in range(len(L)):
#        for i in range(len(L) -1):
#            if L[i] > L[i + 1]:
#                L[i], L[i + 1] = L[i + 1], L[i]
#                print L

#def bubbleSort(L):
#    temp = True
#    while temp:
#        temp = False
#        for i in range(len(L) - 1):
#            if L[i] > L[i + 1]:
#                L[i], L[i + 1] = L[i + 1], L[i]
#                temp = True
#                print L



#def nerge(left, right):
#    result = [ ]
#    i, j = 0, 0
#    while i < len(left) and j < len(right):
#        if left[i] <= right[j]:
#            result.append(left[i])
#            i += 1
#        else:
#            result.append(right[j])
#            j += 1
#    while (i < len(left)):
#        result.append(left[i])
#        i += 1
#    while (j < len(right)):
#        result.append(right[j])
#        j += 1
#    return result
#
#
#def nergesort(L):
#    print L
#    if len(L) < 2:
#        return L
#    else:
#        middle = len(L) / 2
#        left = nergesort(L[:middle])
#        right = nergesort(L[middle:])
#        together = nerge(left, right)
#        print "nerged",together
#        return together
#
#
#
##斐波那契数列
#def fib(n):
#    global numCalls
#    numCalls += 1
#    print 'fib called with', n
#    if n == 0 or n == 1: return 1
#    if n <= 1:
#        return 1
#    else:
#        return fib(n-1) + fib(n-2)
#
#numCalls = 0
#n = 5
#res = fib(n)
#print 'fib of', n, '=', res, 'numCalls = ', numCalls
#
##斐波那契数列2
#def fastFib(n, memo):
#    global numCalls
#    numCalls += 1
#    print 'fib1 called with', n
#    if not n in memo:
#        memo[n] = fastFib(n-1, memo) + fastFib(n-2, memo)
#    return memo[0]
#
#def fibl(n):
#    memo = {0:1, 1:1}
#    return fastFib(n, memo)
#numCalls = 0
#n = 5
#res = fibl(n)
#print 'fib of', n, '=', res, 'numCalls = ', numCalls
#
#
#


#def insert_sort(lists):
#    # 插入排序
#    count = len(lists)
#    for i in range(1, count):
#        key = lists[i]
#        j = i - 1
#        while j >= 0:
#            if lists[j] > key:
#                lists[j + 1] = lists[j]
#                lists[j] = key
#            j -= 1
#    return lists
#
#2、希尔排序
#def shell_sort(lists):
#    # 希尔排序
#    count = len(lists)
#    step = 2
#    group = count / step
#    while group > 0:
#        for i in range(0, group):
#            j = i + group
#            while j < count:
#                k = j - group
#                key = lists[j]
#                while k >= 0:
#                    if lists[k] > key:
#                        lists[k + group] = lists[k]
#                        lists[k] = key
#                    k -= group
#                j += group
#        group /= step
#    return lists
#
#3、冒泡排序
#def bubble_sort(lists):
#    # 冒泡排序
#    count = len(lists)
#    for i in range(0, count):
#        for j in range(i + 1, count):
#            if lists[i] > lists[j]:
#                lists[i], lists[j] = lists[j], lists[i]
#    return lists
#
#4、快速排序
#def quick_sort(lists, left, right):
#    # 快速排序
#    if left >= right:
#        return lists
#    key = lists[left]
#    low = left
#    high = right
#    while left < right:
#        while left < right and lists[right] >= key:
#            right -= 1
#        lists[left] = lists[right]
#        while left < right and lists[left] <= key:
#            left += 1
#        lists[right] = lists[left]
#    lists[right] = key
#    quick_sort(lists, low, left - 1)
#    quick_sort(lists, left + 1, high)
#    return lists
#
#5、直接选择排序
#def select_sort(lists):
#    # 选择排序
#    count = len(lists)
#    for i in range(0, count):
#        min = i
#        for j in range(i + 1, count):
#            if lists[min] > lists[j]:
#                min = j
#        lists[min], lists[i] = lists[i], lists[min]
#    return lists
#
#6、堆排序
## 调整堆
#def adjust_heap(lists, i, size):
#    lchild = 2 * i + 1
#    rchild = 2 * i + 2
#    max = i
#    if i < size / 2:
#        if lchild < size and lists[lchild] > lists[max]:
#            max = lchild
#        if rchild < size and lists[rchild] > lists[max]:
#            max = rchild
#        if max != i:
#            lists[max], lists[i] = lists[i], lists[max]
#            adjust_heap(lists, max, size)
## 创建堆
#def build_heap(lists, size):
#    for i in range(0, (size/2))[::-1]:
#        adjust_heap(lists, i, size)
## 堆排序
#def heap_sort(lists):
#    size = len(lists)
#    build_heap(lists, size)
#    for i in range(0, size)[::-1]:
#        lists[0], lists[i] = lists[i], lists[0]
#        adjust_heap(lists, 0, i)
#
#7、归并排序
#def merge(left, right):
#    i, j = 0, 0
#    result = []
#    while i < len(left) and j < len(right):
#        if left[i] <= right[j]:
#            result.append(left[i])
#            i += 1
#        else:
#            result.append(right[j])
#            j += 1
#    result += left[i:]
#    result += right[j:]
#    return result
#def merge_sort(lists):
#    # 归并排序
#    if len(lists) <= 1:
#        return lists
#    num = len(lists) / 2
#    left = merge_sort(lists[:num])
#    right = merge_sort(lists[num:])
#    return merge(left, right)
#
#8、基数排序
#import math
#def radix_sort(lists, radix=10):
#    k = int(math.ceil(math.log(max(lists), radix)))
#    bucket = [[] for i in range(radix)]
#    for i in range(1, k+1):
#        for j in lists:
#            bucket[j/(radix**(i-1)) % (radix**i)].append(j)
#        del lists[:]
#        for z in bucket:
#            lists += z
#            del z[:]
#    return lists
#
