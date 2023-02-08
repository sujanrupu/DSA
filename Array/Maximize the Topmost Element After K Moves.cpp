//Link: https://leetcode.com/problems/maximize-the-topmost-element-after-k-moves/description/

class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        // Base Case
       if(nums.size() == 1 && k % 2)   return -1;
       if(k == 1)   return nums[1];

       //Standard Cases
       int ans = 0;

       // First Case
       if(k > nums.size()){
           for(int i = 0; i<nums.size(); i++)   ans = max(ans, nums[i]);
           return ans;
       }

       //Second Case
       else if(k == nums.size()){
           for(int i = 0; i<k -  1; i++)    ans = max(ans, nums[i]);
           return ans;
       }

       // Third Case
       else {
           for(int i = 0; i<k - 1; i++)     ans = max(ans, nums[i]);
           return max(ans, nums[k]);
       }
    }
};
