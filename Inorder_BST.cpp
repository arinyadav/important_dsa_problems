void inorder(Node* root , vector<int>&in)
{
    if (root==NULL)
    return ;
    
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
