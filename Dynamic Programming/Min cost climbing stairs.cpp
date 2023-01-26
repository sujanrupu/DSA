//Link: https://leetcode.com/problems/min-cost-climbing-stairs/description/

class Solution {
public:
    int solve(vector<int>& cost, int n, vector <int>& dp){
        //Base Case
        if(n <= 1)  return cost[n];

        //Already Satisfied Case
        if(dp[n] != -1) return dp[n];

        //Standard Case
        int incl = solve(cost, n - 2, dp);
        int excl = solve(cost, n - 1, dp);
        dp[n] = cost[n] + min(incl, excl);
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector <int> dp(n + 1, -1);
        int ans = min(solve(cost, n - 2, dp), solve(cost, n - 1, dp));
        return ans;
    }
};
