//Link: https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        long long reverse = 0, rem;
        while(x!=0)    
        {    
            rem=x%10;      
            reverse=reverse*10+rem;    
            x/=10;    
        }   
        if(reverse > INT_MAX || reverse < INT_MIN)  return 0;
        return int(reverse); 
    }
};
