//Link: https://www.codingninjas.com/codestudio/problems/cut-into-segments_1214651?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int solve(int n, int x, int y, int z, vector <int>& dp){
  //Base Case
	if(n < 0)	return INT_MIN;
	if(n == 0)	return 0;
  
  //Alaready Satisfied Case
	if(dp[n] != -1)	return dp[n];
  
  //Standard Case
	int a = solve(n -x, x, y, z, dp) + 1;
	int b = solve(n - y, x, y, z, dp) + 1;
	int c = solve(n - z, x, y, z, dp )+ 1;
	dp[n]=  max(a, max(b, c));
	return dp[n];
}

int cutSegments(int n, int x, int y, int z) {
	vector <int> dp(n + 1, -1);
	int ans = solve(n, x, y, z, dp);
	if(ans < 0)	return 0;
	else return ans;
}
