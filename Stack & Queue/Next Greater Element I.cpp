//Link: https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v(nums1.size(), 0);
        int size1 = nums1.size(), size2 = nums2.size(), i, j, count1, count2;
        for(i = 0; i<size1; i++){
            count1 = 0;
            count2 = 0;
            for(j = 0; j<size2; j++){
                if(nums1[i] == nums2[j])    count1 = 1;
            if(count1 == 1 && nums1[i] < nums2[j]){
                v[i] = nums2[j];
                count2 = 1;
                break;
            }
            }
            if(count2 == 0) v[i] = -1;
        }
        return v;
    }
};
