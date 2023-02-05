//Link: https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	set<vector<int>> s;
	vector <vector<int> > ans;
	sort(arr.begin(), arr.end());
	for(int i = 0; i<n; i++){
		int j = i + 1;
		int k = n - 1;
		while(j < k){
			int sum = arr[i] + arr[j] + arr[k];
			if(sum == K)	{
				s.insert({arr[i], arr[j], arr[k]});
				j++; k--;
			}
			else if(sum < K)	j++;
			else k--;
		}
	}
	for(auto x:s)	ans.push_back(x);
	return ans;
}
