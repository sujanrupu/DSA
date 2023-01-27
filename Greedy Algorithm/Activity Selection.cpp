//Link: https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1

class Solution
{
    public:
    static bool cmp(pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector <pair<int, int> > v;
        for(int i = 0; i<n; i++){
            pair<int, int> p = make_pair(start[i], end[i]);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), cmp);
        int ansEnd = v[0].second;
        int count = 1;
        for(int i = 1; i<n; i++){
            if(v[i].first > ansEnd){
                count++;
                ansEnd = v[i].second;
            }
        }
        return count;
    }
};
