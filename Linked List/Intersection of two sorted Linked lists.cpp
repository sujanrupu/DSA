//Link: https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

Node* findIntersection(Node* head1, Node* head2)
{
    Node* first = head1;
    Node* second = head2;
    Node* head = NULL;
    Node* prev = NULL;
    
    while(first and second){
        if(first -> data == second -> data){
            if(head == NULL){
                Node* temp = new Node(first -> data);
                head = temp;
                prev = temp;
            }   else {
                Node* temp = new Node(first -> data);
                prev -> next = temp;
                prev = prev -> next;
            }
            first = first -> next;
            second = second -> next;
        }
        else if(first -> data < second -> data){
            first = first -> next;
        }   else {
            second = second -> next;
        }
    }
    return head;
}
