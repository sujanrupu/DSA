//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        string c = "";
        for(int i = 0; i<s.size(); i++){
            if(c.size() > 0 && c.back() == s[i])    c.pop_back();
            else c.push_back(s[i]);
        }
        return c;
    }
};
