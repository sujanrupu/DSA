//Link: https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
public:
    int minimumDays(int S, int N, int M){
        int sunday = S/7;
        int totalDay = S*M;
        int buyDays = S - sunday;
        int ans;
        
        if(totalDay % N == 0)   ans = totalDay/N;
        else ans = (totalDay/N) + 1;
        
        if(ans <= buyDays)  return ans;
        else return -1;
    }
};
