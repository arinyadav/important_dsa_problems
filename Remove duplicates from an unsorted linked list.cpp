 Node * removeDuplicates( Node *head) 
    {
         unordered_set<int>mp;
        Node* curr = head;
        if(curr == NULL){
            return head;
        }
        else {
            mp.insert(curr->data);
        }
        while(curr != NULL && curr->next != NULL){
            if(mp.find(curr->next->data) != mp.end()){
                curr->next = curr->next->next;
            }
            else{
                mp.insert(curr->next->data);
                curr = curr->next;
            }
        }
        return head;
        }
};
