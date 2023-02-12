    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *temp=head,*prev=NULL,*nxt,*back,*txt;
        int carry=0;
        
        while(temp)
        {
            nxt=temp->next;
            temp->next=prev;
            prev=temp;
            back=temp;
            temp=nxt;
        }
        temp=back;
        temp->data++;
        
        if(temp->data==10)
        {
            temp->data=0;
            carry=1;
            temp=temp->next;
        }
        if(carry==0)
        {
            temp=back;
            prev=NULL;
            while(temp)
            {
                nxt=temp->next;
                temp->next=prev;
                prev=temp;
                back=temp;
                temp=nxt;
            }
            return head;
        }
        
        while(temp && carry)
        {
            temp->data++;
            if(temp->data==10)
                temp->data=0;
            else
                carry=0;
            txt=temp;
            temp=temp->next;
        }
        if(back==head)
        {
            txt=head;
        }
        if(carry==1)
        {
            Node *nn= new Node (1);
            txt->next=nn;
            txt=txt->next;
            head=txt;
        }
        
        temp=back;
        prev=NULL;
        while(temp)
        {
            nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
        }
        return head;
    }
