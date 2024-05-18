	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    //get indegree
	    int id[V] = {0};
	    for(int i=0;i<V;i++) {
	        for(auto it: adj[i]) {
	            id[it]++;
	        }
	    }
	    
	    //for indegree 0 push in queue
	    queue<int>q;
	    for(int i=0;i<V;i++) {
	        if(id[i]==0) {
	            q.push(i);
	        }
	    }
	    
	    //pushing answers
	    vector<int>topo;
	    while(!q.empty()) {
	        int temp = q.front();
	        q.pop();
	        topo.push_back(temp);
	        for(auto it: adj[temp]) {
	            id[it]--;
	            if(id[it]==0) {
	                q.push(it);
	            }
	        }
	    }
	    return topo;
	}
