 Node* lca(Node* root ,int n1 ,int n2 )
    {
       if (root==NULL)
       return NULL;
       
       if(root->data==n1 || root->data==n2)
       return root;
       
       Node* la=lca(root->left,n1,n2);
       Node* ra=lca(root->right,n1,n2);
       
       if(la!=NULL && ra!=NULL)
       return root;
       else if(la!=NULL && ra==NULL)
       return la;
        if(la==NULL && ra!=NULL)
       return ra;
       else
       return NULL;
       
    }
