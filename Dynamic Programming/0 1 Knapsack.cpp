//Link: https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542

#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int solve(vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int> >& dp){
    //Base Case
    if(index == 0){
        if(weight[index] <= capacity)  return value[index];
        else return 0;
    }

    //Already Satisfied Case
    if(dp[index][capacity] != -1)   return dp[index][capacity];

    //Strandard Case
    int incl = 0;
    if(weight[index] <= capacity){
        incl += value[index] + solve(weight, value, index - 1, capacity - weight[index], dp);
    }
    int excl = 0 + solve(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(incl, excl);
    return dp[index][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int> > dp(n, vector<int>(maxWeight + 1, -1));
    return solve(weight, value, n - 1, maxWeight, dp);
}
