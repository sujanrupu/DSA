//Link: https://leetcode.com/problems/maximum-product-subarray/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int currMaxProduct = nums[0], currMinProduct = nums[0], maxProduct = nums[0];
        for(int i=1; i<n; i++){
            int temp = currMaxProduct;
            currMaxProduct = max({nums[i], currMaxProduct*nums[i], currMinProduct*nums[i]});
            currMinProduct = min({nums[i], temp*nums[i], currMinProduct*nums[i]});
            maxProduct = max(maxProduct, currMaxProduct);
        }
        return maxProduct;
    }
};
