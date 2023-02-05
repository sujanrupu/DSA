//Link: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution{
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long leftMax[n], rightMax[n];
        leftMax[0] = arr[0];
        for(int i = 1; i<n - 1; i++)    leftMax[i] = max(leftMax[i - 1], (long long) arr[i]);
        
        rightMax[n - 1] = arr[n - 1];
        for(int i = (n - 2); i>= 0; i--)    rightMax[i] = max(rightMax[i + 1], (long long) arr[i]);
        
        long long ans = 0;
        for(int i = 1; i<n - 1; i++){
            ans += min(leftMax[i], rightMax[i]) - arr[i];
        }
        return ans;
    }
};
