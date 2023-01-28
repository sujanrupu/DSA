//Link: https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    Node* curr = head;
    while(curr -> next != NULL){
        if(curr -> data == curr -> next -> data){
            curr -> next = curr -> next -> next;
        }   else {
            curr = curr -> next;
        }
    }
    return head;
}
