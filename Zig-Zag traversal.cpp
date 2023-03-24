class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	bool lefttoright = true;
    	
    	if(root==NULL)
    	return ans;
    	
    	queue<Node*>q;
    	q.push(root);
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int> v(size);
    	    
    	    for(int i=0;i<size;i++){
    	       Node* frontNode=q.front();
    	       q.pop();
    	       
    	       int index=lefttoright?i:size-i-1;
    	       v[index]=frontNode->data;
    	       
    	       if(frontNode->left)
    	       q.push(frontNode->left);
    	       
    	       if(frontNode->right)
    	       q.push(frontNode->right);
    	    }
    	    // change direction
    	    lefttoright=!lefttoright;
    	    for(auto i:v)
    	    ans.push_back(i);
    	}
    	return ans;
    }
};
