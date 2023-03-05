//Link: https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int len = 1, max = 1;
        for(int i = 1; i<n; i++){
            if(nums[i] > nums[i - 1])   len++;
            else {
                if(max < len)   max = len;
                len = 1;
            }
        }
        if(max < len)   max = len;
        return max;
    }
};
