class Solution {
public:
    int ans = INT_MAX;
    
    bool checkBST(Node* root, int mini, int maxi) {
        if(!root) return true;
        
        if(root->data < mini || root->data > maxi) 
          return false;
          
        return checkBST(root->left, mini, root->data-1) && checkBST(root->right, root->data+1, maxi);  
    }
    
    int sum(Node* root, int& count) {
        if(!root) return 0;
        
        if(!root->left and !root->right) {
            count++;
            return root->data;
        }
        
        count++;
        return root->data + sum(root->left, count) + sum(root->right, count);
    }
    
    void solve(Node* root, int target) {
        if(!root)  return ;
        
        if(!root->left and !root->right) {
            if(root->data == target) {
                ans = 1;
                return ;
            }
        }
        
        if(checkBST(root, INT_MIN, INT_MAX)) {
            int count=0;
            int currSum = sum(root, count);
            if(currSum == target) {
                ans = min(ans, count);
            }
        }
        
        solve(root->left, target);
        solve(root->right, target);
    }

    int minSubtreeSumBST(int target, Node *root) {
        solve(root, target);
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};
