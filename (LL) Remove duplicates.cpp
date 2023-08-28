Node *removeDuplicates(Node *head)
{
       Node *curr=head;
 
 while(curr!=NULL) {
     if((curr->next!=NULL) && ((curr->data) == (curr->next->data))) {
        delete(curr->next);
        curr->next=curr->next->next;
     }
     else {
         curr=curr->next;
     }
 }
 return head;
        }
