class Solution {
  public:
  int solve(Node* root,int &i, int k){
if(root==NULL)
return -1;

int left=solve(root->left,i,k);

if(left!=-1)
return left;

i++;
if(i==k)
return root->data;

return solve(root->right,i,k);
}
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
     int i=0;
    int ans= solve(root,i,K);
    return ans;
    }
