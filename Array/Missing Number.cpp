//Link: https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int k, sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
        }
        k = (n * (n + 1))/2;
        return k - sum;
    }
};
