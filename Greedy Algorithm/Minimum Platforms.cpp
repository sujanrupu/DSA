//Link: https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	vector<pair<int, int> > v;
    	for(int i = 0; i<n; i++){
    	    v.push_back({arr[i], 0});
    	    v.push_back({dep[i], 1});
    	}
    	sort(v.begin(), v.end());
    	int ans = 0, count = 0;
    	for(int i = 0; i<v.size(); i++){
    	    if(v[i].second == 0)    count++;
    	    else count --;
    	    ans = max(ans, count);
    	}
    	return ans;
    }
};
