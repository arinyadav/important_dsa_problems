class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca(Node* root, int a, int b){
       if (root==NULL)
       return NULL;
       
       if(root->data==a || root->data==b)
       return root;
       
       Node* la=lca(root->left,a,b);
       Node* ra=lca(root->right,a,b);
       
       if(la!=NULL && ra!=NULL)
       return root;
       else if(la!=NULL && ra==NULL)
       return la;
        if(la==NULL && ra!=NULL)
       return ra;
       else
       return NULL;
    }
    int solve(Node* root,int val){
        if (root==NULL)
        return 0;
        if(root->data==val)
        return 1;
        int a=solve(root->left,val);
        int b=solve(root->right,val);
        if(!a and !b)
        return 0;
        else
        return a+b+1;
    }
    int findDist(Node* root, int a, int b) {
        Node* l=lca(root,a,b);
        int x=solve(l,a);
        int y=solve(l,b);
        return x+y-2;
    }
};
