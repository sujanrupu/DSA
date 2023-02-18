//Link: https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tp) {
        vector <int> ans(tp.size());
        stack <int> st;
        for(int i = 0; i<tp.size(); i++){
            while(!st.empty() && tp[st.top()] < tp[i]){
                int x = st.top();
                st.pop();
                int p = i - x;
                ans[x] = p;
            }
            st.push(i);
        }
        return ans;
    }
};
