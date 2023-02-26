//Link: https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(int i = 0; i<n; i++){
            if(a[i] + b[i] < k)     return false;
        }
        return true;
    }
};
