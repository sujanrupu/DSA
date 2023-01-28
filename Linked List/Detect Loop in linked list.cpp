//Link: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        Node* fast = head;
        Node* slow = head;
        while(fast && slow && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)    return 1;
        }
        return 0;
    }
};
