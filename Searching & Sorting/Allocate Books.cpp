//Link: https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int isPossible(vector <int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i = 0 ;i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(isPossible(arr, n, m, mid))  {
            ans = mid;
            e = mid-1;
        } else {
          s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
