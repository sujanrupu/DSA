//Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int sumMax = arr[0];
        int sumTillNow = arr[0]<0? 0 : arr[0];
        
        for(int i = 1; i<n; i++){
            sumMax = max(sumMax, sumTillNow + arr[i]);
            sumTillNow += arr[i];
            if(sumTillNow < 0)  sumTillNow = 0;
        }
        return sumMax;
        
    }
};
