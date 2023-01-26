//Link: https://www.codingninjas.com/codestudio/problems/ninja-and-the-fence_3210208?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include <bits/stdc++.h> 
using namespace std;
#define MOD 1000000007  

int add(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b){
    return ((a%MOD*1L) * b%MOD)%MOD;
}

int solve(int n, int k, vector <int>& dp){
    //Base Case
    if(n == 1)  return k;
    if(n == 2)  return add(k, mul(k, k - 1));

    //Already Satisfied Case
    if(dp[n] != -1) return dp[n];

    //Standard case
    dp[n] = mul((k - 1), add(solve(n - 2, k, dp), solve(n - 1, k, dp)));
    return dp[n];
}
int numberOfWays(int n, int k) {
    vector <int> dp(n + 1, -1);
    return solve(n, k, dp);
}
