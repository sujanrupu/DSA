//Link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

class Solution
{
    public:
    //To reverse a linked list
    Node* reverse(Node* head){
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
    
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }   else {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first != NULL && second != NULL){
            int sum = carry + first -> data + second -> data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first -> next;
            second = second -> next;
        }
        while(first != NULL){
            int sum = carry + first -> data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first -> next;
        }
        while(second != NULL){
            int sum = carry + second -> data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            second = second -> next;
        }
        while(carry != NULL){
            int sum = carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
        }
        return ansHead;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        Node* ans = add(first, second);
        ans = reverse(ans);
        return ans;
    }
};
