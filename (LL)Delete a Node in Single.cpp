Node* deleteNode(Node *head,int x)
{
    Node* temp = head;
    Node* newHead = temp;
    Node* prev = NULL;
    
    if (x == 1) return head->next;
    
    while(temp!= NULL && x > 1) {
       x--;
       prev = temp;
       temp = temp->next;
    }
    
    prev->next = temp->next;
    
    return newHead;

}
