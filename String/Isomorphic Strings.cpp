//Link: https://leetcode.com/problems/isomorphic-strings/description/

class Solution(object):
    def isIsomorphic(self, s, t):
        return [s.index(i) for i in s]==[t.index(i) for i in t]
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
