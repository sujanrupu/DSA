//Link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            count += nums[n - k];
            break;
        }
        return count;
    }
};
