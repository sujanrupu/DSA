//Link: https://leetcode.com/problems/coin-change/description/

class Solution {
public:
    int solve(vector <int>& coins, int amount, vector <int>& dp){
        //Base Case
        if(amount==0)   return 0;
        if(amount < 0)  return INT_MAX;

        //Already Satisfied Case
        if(dp[amount] != -1) return dp[amount];

        //Stadard Case
        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            int ans = solve(coins, amount-coins[i], dp);
            if(ans != INT_MAX)  mini = min(mini, 1+ans);
        }
        dp[amount] = mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector <int> dp(amount+1, -1);
        int ans = solve(coins, amount, dp);
        if(ans == INT_MAX)   return -1;
        else    return ans;
    }
};
