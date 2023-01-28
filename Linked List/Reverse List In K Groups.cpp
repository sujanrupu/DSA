//Link: https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0

Node* kReverse(Node* head, int k) {
  if (head == NULL) {
    return NULL;
  }
        Node* next = NULL;
        Node* curr = head;
        Node* prev = NULL;
        int count = 0;
        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != NULL){
            head -> next = kReverse(next, k);
        }
        return prev;
}
