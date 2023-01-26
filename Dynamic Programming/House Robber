class Solution {
public:

    int solve(vector <int>& nums){
        int prev2 = 0;
        int prev1 = nums[0];
        int n = nums.size();
        for(int i = 1; i<n; i++){
            int incl = nums[i] + prev2;
            int excl = 0 + prev1;
            int ans = max(incl, excl);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    
    int rob(vector<int>& nums) {
        return solve(nums);
    }
};
