//Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = arr[0], temp, count;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        temp = max;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == temp){
                count = i;
                break;
            }
        }
        return count;
    }
};
