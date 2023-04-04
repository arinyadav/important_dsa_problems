     bool isValid(Node*root, int min, int max) {
        if(root == NULL) {
            return true;
        }
        
        if(root->data > min && root->data < max) {
            bool left = isValid(root->left, min, root->data);
            bool right = isValid(root->right, root->data, max);
            return (left && right);
        }
        
        else {
            return false;
        }
    }


    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        return isValid(root, INT_MIN, INT_MAX);
            
    }
