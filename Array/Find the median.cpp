//Link: https://practice.geeksforgeeks.org/problems/find-the-median0527/1

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int ans;
		    int n = v.size();
		    
		    sort(v.begin(), v.end());
		    
		    if(n % 2 == 1){
		        for(int i = 0 ;i<n; i++){
		            ans = v[(n - 1) / 2];
		        }
		    }   else {
		        for(int i = 0; i<n; i++){
		            int first = v[(n - 1) / 2];
		            int second = v[(n - 1) / 2 + 1];
		            ans = (first + second)/2;
		        }
		    }
		    return ans;
		}
};
