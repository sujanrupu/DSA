//Link: https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, temp = 0;
        for(auto i: nums)  sum += i;

        for(int i = 0; i<nums.size(); i++){
            sum -= nums[i];
            if(sum == temp) return i;
            temp += nums[i];
        }
        return -1;
    }
};
