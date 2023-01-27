//Link: https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        for(int i = 0; i<n; i++){
            pq.push(arr[i]);
        }
        long long cost = 0;
        while(pq.size() > 1){
            long long first = pq.top();
            pq.pop();
            
            long long second = pq.top();
            pq.pop();
            
            long long mergedList = first + second;
            cost += mergedList;
            pq.push(mergedList);
        }
        return cost;
    }
};
