//Link: https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(nums[i] == nums[j])  count = nums[i];
                break;
            }
        }
        return count;
    }
};
