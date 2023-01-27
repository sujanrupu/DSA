#include<vector>
using namespace std;

int solve(int n, vector <int>& days, vector <int>& cost, int index, vector <int>& dp){
    //Base Case
    if(index >= n)  return 0;

    //Already Satisfied Case
    if(dp[index] != -1) return dp[index];

    //Standard Case
    //1 day pass
    int option1 = cost[0] + solve(n, days, cost, index + 1, dp);
    int i;
    //7 days pass
    for(i = index; i<n && days[i] < days[index] + 7; i++);
    int option2 = cost[1] + solve(n, days, cost, i, dp);
    //30 days pass
    for(i = index; i<n && days[i] < days[index] + 30; i++);
    int option3 = cost[2] + solve(n, days, cost, i, dp);
    dp[index] = min(option1, min(option2, option3));
    return dp[index];
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    vector <int> dp(n + 1, -1);
    return solve(n, days, cost, 0, dp);
}   
