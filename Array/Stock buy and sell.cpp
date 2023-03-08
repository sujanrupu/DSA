//Link: https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        int profit = -A[0], lastBuy = 0;
        
        vector <vector <int> > ans;
        for(int i=1; i<n; i++){
            if(A[i] <= A[lastBuy]){
                profit += A[lastBuy];
                profit -= A[i];
                lastBuy = i;
            }   else {
                ans.push_back({lastBuy, i});
                lastBuy = i;
            }
        }
        
        profit += A[n-1];
        return ans;
    }
};
