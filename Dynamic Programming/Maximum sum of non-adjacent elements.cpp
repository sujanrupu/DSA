//Link: https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261

#include <bits/stdc++.h> 
using namespace std;

//Memorization approach
int solve(vector<int>& nums, int n, vector<int>& dp){
    //Base Case
    if(n < 0)   return 0;
    if(n == 0)  return nums[0];

    //Already Sarisfied Case
    if(dp[n] != -1) return dp[n];

    //Strandard Case
    int incl = nums[n] + solve(nums, n - 2, dp);
    int excl = 0 + solve(nums, n - 1, dp);
    dp[n] = max(incl, excl);
    return dp[n];
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector <int> dp(n + 1, -1);
    return solve(nums, n - 1, dp);
}


//Tabulation approach
int solve(vector<int>& nums){
    int n = nums.size();
    vector <int> dp(n, 0);
    dp[0] = nums[0];

    for(int i = 1; i<n; i++){
        int incl = nums[i] + dp[i - 2];
        int excl = 0 + dp[i - 1];
        dp[i] = max(incl, excl);
    }
    return dp[n - 1];
}

int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums);
}


//Optimized approach
int solve(vector<int>& nums){
    int prev2 = 0;
    int prev1 = nums[0];
    int n = nums.size();

    for(int i = 1; i<n; i++){
        int incl = nums[i] + prev2;;
        int excl = 0 + prev1;
        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums);
}
