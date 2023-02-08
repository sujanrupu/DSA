//Link: https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        while(j < n){
            if(nums[j] == 0)    j++;
            else{
                swap(nums[i], nums[j]);
                i++; j++;
            }
        }
    }
};
