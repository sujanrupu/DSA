//Link: https://www.codingninjas.com/codestudio/problems/magician-and-chocolates_920437?leftPanelTab=0

#include <bits/stdc++.h> 
int maximumChocolates(vector<int> &arr, int k){
    int mod = 1000000007;
    int n = arr.size();
    int ans = 0;
    while(k--){
        int max = 0, pos = 0;
        for(int i=0; i<n; i++){     
            if (arr[i] > max) {
                max = arr[i];
                pos = i;
            }
        }
        ans = (ans + max)%mod;
        arr[pos] = arr[pos]/2;
    }
    return ans;
}
