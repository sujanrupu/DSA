//Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        for(int i = 0; i<n; i++){
            int test = nums[i] * nums[i];
            ans.push_back(test);
            test = 0;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
