//Link: https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

class Solution 
{
    public:
    static bool cmp(Job a, Job b){
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr + n, cmp);
        bool done[n] = {0};
        int day = 0, profit = 0;
        for(int i = 0; i<n; i++){
            for(int j = min(arr[i].dead - 1, n); j>=0; j--){
                if(done[j] == false){
                day += 1;
                profit += arr[i].profit;
                done[j] = true;
                break;
                }
            }
        }
        return {day, profit};
    } 
};
