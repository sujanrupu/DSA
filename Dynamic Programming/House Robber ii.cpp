//Link: https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
int solve(vector <int>& nums){
    int prev2 = 0;
    int prev1 = nums[0];
    int n = nums.size();
    for(int i =  1; i<n; i++){
        int incl = nums[i] + prev2;
        int excl = 0 + prev1;
        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)  return nums[0];
        vector <int> first;
        vector <int> second;
        for(int i = 0; i<n; i++){
            if(i != 0)  first.push_back(nums[i]);
            if(i != (n - 1))    second.push_back(nums[i]);
        }
        return max(solve(first), solve(second));
    }
};
