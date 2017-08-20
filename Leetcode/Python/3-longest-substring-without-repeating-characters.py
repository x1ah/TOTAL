#!/usr/bin/env python
# coding: utf-8


class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str abcdab abcbba dvdf
        :rtype: int
        """
        res_map, max_length, tmp_length, cur = {}, 0, 0, 0
        for i, c in enumerate(s):
            if c not in res_map or res_map[c] < cur:
                max_length = max(max_length, i-cur+1)
            else:
                cur = res_map[c] + 1
            res_map[c] = i
        return max_length
