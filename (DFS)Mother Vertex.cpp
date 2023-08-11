	int findMotherVertex(int V, vector<int>adj[])
	{
	  vector<int>vis(V,0);
	  int last_node=0;
	  
	  //stroing last node; reaching last node
	  for(int i=0;i<V;i++) {
	      if(vis[i]==0){
	          dfs(V,i,adj,vis);
	          last_node=i;
	      }
	  }
	  
	  // doing every zero to check whether from last node we can reach all vertex or not 
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
