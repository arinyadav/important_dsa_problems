void solve(Node *root, vector<int>ans,int level)
{
   if (root==NULL)
     return;
  
  if(level==ans.size())
    ans.push_back(root-data);
  
  // for left view first call for left and then call for right //
  solve(root->right,ans,level+1);
  solve(root->left,ans,level+1);
  
}

vector<int> rightView(Node *root)
    {
   vector<int>ans;
   solve(root,ans,o);
   return ans;
 }
