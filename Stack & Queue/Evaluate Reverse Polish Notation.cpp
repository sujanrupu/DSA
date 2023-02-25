//Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(auto i : tokens){
            if(i== "+" || i=="-" || i=="*" || i=="/"){
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();

                if(i=="+")  st.push(op1 + op2);
                if(i=="-")  st.push(op1 - op2);
                if(i=="*")  st.push(op1 * op2);
                if(i=="/")  st.push(op1 / op2);
            }   else {
                stringstream ss(i);
                int data;
                ss >> data;
                st.push(data);
            }
        }
        return st.top();
    }
};
