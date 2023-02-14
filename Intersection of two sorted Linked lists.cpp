Node* findIntersection(Node* head1, Node* head2)
{
   Node *p1=head1;
   Node *p2=head2;
   Node *head=NULL;
   Node *curr=NULL;
   
   while(p1!=NULL && p2!=NULL) {
       if(p1->data == p2->data) {
           if (head==NULL) {
               Node *t= new Node(p1->data);
               head=t;
               curr=t;
           }
           else {
             Node *t= new Node(p1->data);
             curr->next=t;
             curr=curr->next;
           }
           p1=p1->next;
           p2=p2->next;
       }
       else {
           if(p1->data > p2->data)
            p2=p2->next;
            else
             p1=p1->next;
       }
   }
   return head;
}
