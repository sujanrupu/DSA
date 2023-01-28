//Link: https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node* head1, Node* head2)
{
    int n1 = 0, n2 = 0;
    Node* temp;
    for(temp = head1; temp; temp = temp -> next)    n1++;
    for(temp = head2; temp; temp = temp -> next)    n2++;
    for(; n1 > n2; n1--)    head1 = head1 -> next;
    for(; n2 > n1; n2--)    head2 = head2 -> next;
    while(head1 != head2){
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    if(head1)   return head1 -> data;
    else return -1;
}
