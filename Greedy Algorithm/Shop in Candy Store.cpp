//Link: https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies, candies + N);
        vector <int> ans;
        
        int mini = 0;
        int free = N - 1;
        int buy = 0;
        while(free >= buy){
            mini += candies[buy];
            buy ++;
            free = free - K;
        }
        ans.push_back(mini);
        
        int maxi = 0;
        free = 0;
        buy = N - 1;
        while(buy >= free){
            maxi += candies[buy];
            buy --;
            free = free + K;
        }
        ans.push_back(maxi);
        
        return ans;
    }
};
