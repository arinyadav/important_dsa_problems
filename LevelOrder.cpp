  vector<int> levelOrder(Node* node)
    {
      vector<int> l;
      if(node == NULL) return l;
      queue<Node*> q;
      q.push(node);
      while(q.size()>0){
    
              Node *root = q.front();
              q.pop();
              if(root->left != NULL) q.push(root->left);
              if(root->right != NULL) q.push(root->right);
              l.push_back(root->data);
          
      }
      return l;
    }
