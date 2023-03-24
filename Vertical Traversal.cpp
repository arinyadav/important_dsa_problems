 vector<int> verticalOrder(Node *root)
    {
        vector<int>ans;
        map<int,map<int,vector<int>>>nodes;
        queue<pair<Node*,pair<int,int>>>q;
        
        if(root==NULL)
        return ans;
        
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()) {
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            
            Node*frontNode=temp.first;
            int horizontal=temp.second.first;
            int level=temp.second.second;
            
            nodes[horizontal][level].push_back(frontNode->data);
            
            if(frontNode->left)
            q.push(make_pair(frontNode->left,make_pair(horizontal-1,level+1)));
            
            if(frontNode->right)
            q.push(make_pair(frontNode->right,make_pair(horizontal+1,level+1)));
        }
        for(auto i:nodes){
            for(auto j:i.second) {
                for(auto k:j.second) {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
