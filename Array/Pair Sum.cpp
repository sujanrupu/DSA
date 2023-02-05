//Link: https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n = arr.size();
        vector <vector <int> > ans;
        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(arr[i] + arr[j] == s){
                    vector <int> temp;
                    temp.push_back(min(arr[i], arr[j]));
                    temp.push_back(max(arr[i], arr[j]));
                    ans.push_back(temp);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
}
