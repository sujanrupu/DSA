//Link: https://leetcode.com/problems/backspace-string-compare/description/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <int> sts, st;

        for(int i = 0; i<s.length(); i++){
            if(!st.empty() && s[i] == '#')  st.pop();
            else if(s[i] != '#')    st.push(s[i]);
        }

        for(int j = 0; j<t.length(); j++){
            if(!sts.empty() && t[j] == '#') sts.pop();
            else if(t[j] != '#')    sts.push(t[j]);
        }

        if(sts == st)   return true;
        else    return false;
    }
};
