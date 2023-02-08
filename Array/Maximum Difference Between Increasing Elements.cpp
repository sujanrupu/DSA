//Link: https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/


class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int ans = -1;
        for(int i = 1; i<nums.size(); i++){
            ans = max(ans, nums[i] - mini);
            mini = min(mini, nums[i]);
        }
        return ans == 0?-1 : ans;
    }
};
