//Link: https://leetcode.com/problems/remove-linked-list-elements/description/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)   head = head->next;
        if(head==NULL)  return head;
        head->next = removeElements(head->next, val);
        return head;
    }
};
