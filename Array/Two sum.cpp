//Link: https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int a, b;
        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        return vector <int> {a, b};
    }
};
