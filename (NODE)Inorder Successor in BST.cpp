    Node * inOrderSuccessor(Node *root, Node *x)
    {
       Node* ans=NULL;
       while(root){
           if(x->data>=root->data){
               root=root->right;
           }
           else {
               ans=root;
               root=root->left;
           }
       }
       return ans;
    }
