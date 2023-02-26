//Link: https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int ind1, ind2, count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == k) {
            ind1 = i;
            count += 1;
            break;
        }
    }
    for(int i = (n-1); i>=0; i--){
        if(arr[i] == k){
            ind2 = i;
            break;
        }
    }
    if(count == 1)  return {ind1, ind2};
    else    return {-1, -1};
}
