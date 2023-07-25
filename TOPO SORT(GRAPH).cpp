	void topoSort(int node, unordered_map<int,bool> &visited, stack<int> &s, vector<int> adj[]){
	    visited[node]=true;
	    
	    for(auto nbr: adj[node]){
	        if(!visited[nbr])
	        topoSort(nbr,visited,s,adj);
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    unordered_map<int,bool>visited;
	    stack<int>s;
	   
	   for(int i=0;i<V;i++){
	       if(!visited[i])
	       topoSort(i,visited,s,adj);
	   }
	   
	   vector<int>ans;
	   
	   while(!s.empty()){
	       ans.push_back(s.top());
	       s.pop();
	   }
	   return ans;
