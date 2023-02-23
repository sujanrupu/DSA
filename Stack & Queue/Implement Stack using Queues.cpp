//Link: https://leetcode.com/problems/implement-stack-using-queues/description/

class MyStack {
public:
    queue <int> qq;
    MyStack() {
        
    }
    
    void push(int x) {
        qq.push(x);
        for(int i = 0; i<qq.size()-1; i++){
            qq.push(qq.front());
            qq.pop();
        }
    }
    
    int pop() {
        int r = qq.front();
        qq.pop();
        return r;
    }
    
    int top() {
        return qq.front();
    }
    
    bool empty() {
        if(qq.size() == 0)  return 1;
        else    return 0;
    }
};
