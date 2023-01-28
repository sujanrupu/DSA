//Link: https://practice.geeksforgeeks.org/problems/circular-linked-list/1

bool isCircular(Node *head)
{
   if(!head)    return true;
   Node* temp = head;
   while(head && head -> next != temp){
       head = head -> next;
   }
   if(!head || !(head -> next)) return false;
   return true;
}
