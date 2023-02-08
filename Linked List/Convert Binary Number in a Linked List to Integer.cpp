//Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode* temp = head;
        while(temp != NULL){
            ans *= 2;
            ans += (temp -> val);
            temp = temp -> next;
        }
        return ans;
    }
};
