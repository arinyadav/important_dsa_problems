   void dfs(int V,int front,vector<int> adj[],vector<int> &vis) {
       vis[front]=1;
       for(auto i:adj[front]){
           if(vis[i]==0)
            dfs(V,i,adj,vis);
       }
   }
  
	int findMotherVertex(int V, vector<int>adj[])
	{
	  vector<int>vis(V,0);
	  int last_node=0;
	  
	  for(int i=0;i<V;i++) {
	      if(vis[i]==0){
	          dfs(V,i,adj,vis);
	          last_node=i;
	      }
	  }
	  for(int i=0;i<V;i++) {
	      vis[i]=0;
	  }
	  
	   dfs(V,last_node,adj,vis);
	  
	  for(int i=0;i<V;i++) {
	       if(vis[i]==0)
	       return -1;
	  }
	  return last_node;
	}
