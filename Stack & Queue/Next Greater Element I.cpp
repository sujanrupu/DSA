//Link: https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2);
    };
    vector <int> Solution :: nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v(nums1.size(), 0);
        int found1, flag, i, j;
        int size1 = nums1.size();
        int size2 = nums2.size();
        for(i = 0; i<size1; ++i){
            found1 = 0;
            flag = 0;
            for(j = 0; j<size2; ++j){
                if(nums1[i] == nums2[j]){
                    found1 = 1;
                }
                if(found1 == 1 && nums1[i] < nums2[j]){
                    v[i] = nums2[j];
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                v[i] = -1;
            }
        }
        return v;
    }
