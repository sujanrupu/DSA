//Link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        if(head -> next == NULL)    return head;
        Node* prev = head;
        Node* curr = head -> next;
        head -> next = NULL;
        while(curr != NULL){
            Node* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
};
