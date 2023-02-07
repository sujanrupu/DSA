//Link: https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <vector <int> > v;
        set <vector <int> > s;
        
        for(int i = 0; i<nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0)    {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;    k--;
                }
                else if((nums[i] + nums[j] + nums[k]) < 0){
                    j++;
                }   else    {
                    k--;
                }
            }
        }

        for(auto triplets: s){
            v.push_back(triplets);
        }
        return v;
    }
};
