//Link: https://www.codingninjas.com/codestudio/problems/count-derangements_873861?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<vector>
using namespace std;
#define MOD 1000000007

long long int solve(int n, vector <long long int>& dp){
    //Base Case
    if(n == 1)  return 0;
    if(n == 2)  return 1;

    //Already Satisfied Case
    if(dp[n] != -1) return dp[n];

    //Srandard Case
    dp[n] = ((n - 1)%MOD * ((solve(n - 2, dp)%MOD) + (solve(n - 1, dp)%MOD))%MOD);
    return dp[n];
}

long long int countDerangements(int n) {
    vector<long long int> dp(n + 1, -1);
    return solve(n, dp);
}
