//Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        //Base Case
        if(head -> next == NULL)    return NULL;

        ListNode* slow =  head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast != NULL && fast -> next != NULL){
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = prev -> next -> next;
        return head;
    }
};
