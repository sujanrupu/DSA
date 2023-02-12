//Link: https://leetcode.com/problems/longest-common-prefix/description/

import os
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
       return os.path.commonprefix(strs) 
