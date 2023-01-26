//Link: https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650

#include <bits/stdc++.h> 
#include <vector>
#define MOD 1000000007
using namespace std;

int solve(int nStairs, vector <int>& dp){
    //Base Case
    if(nStairs == 0 || nStairs == 1)    return 1;

    //Already Satisfied Case
    if(dp[nStairs] != -1)   return dp[nStairs];

    //Standard  Case
    dp[nStairs] = (solve(nStairs - 1, dp) + solve(nStairs - 2, dp))%MOD;
    return dp[nStairs];
}

int countDistinctWays(int nStairs) {
    vector <int> dp (nStairs + 1, -1);
    return solve(nStairs, dp);
}
