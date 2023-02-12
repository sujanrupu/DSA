//Link: https://leetcode.com/problems/first-bad-version/description/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low = 1;
        long int high = n;
        long int result = n;
        long int mid;
        while(low <= high){
            mid = (low + high)/2;
            if(isBadVersion(mid)){
                result = mid;
                high = mid - 1;
            }   else {
                low = mid + 1;
            }
        }
        return result;
    }
};
