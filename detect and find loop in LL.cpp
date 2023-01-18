        Node* slow = head;
        Node* fast = head;
        
        // detecting a cycle 
        
        while(fast!=NULL && fast -> next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
           break;
        }
        
        // finding the cycle starting point  
        
        if(slow!=fast) return -1;
        slow = head;
        while(slow!=fast) {
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
     }
