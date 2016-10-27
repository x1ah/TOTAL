#!/usr/bin/env python
# encoding: utf-8

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        res = ListNode(0)
        dec = 0
        curr = res
        while (l1 or l2):
            v1 = 0 if (l1 == None) else l1.val
            v2 = 0 if (l2 == None) else l2.val
            Sum = v1 + v2 + dec
            curr.next = ListNode((Sum) % 10)
            dec = (Sum) / 10
            curr = curr.next
            if l1 != None:
                l1 = l1.next
            if l2 != None:
                l2 = l2.next
        if dec > 0:
            curr.next = ListNode(dec)
        return res.next
