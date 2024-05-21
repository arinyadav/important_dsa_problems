//DFS

void dfs(int node, int vis[],stack<int>&st, vector<int> adj[]) {
	    vis[node] = 1;
	    for(auto it: adj[node]) {
	        if(!vis[it]) {
	            dfs(it,vis,st,adj);
	        }
	    }
	    st.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V]={0};
	    stack<int>st;
	    for(int i=0;i<V;i++) {
	        if(!vis[i]) {
	            dfs(i,vis,st,adj);
	        }
	    }
	    vector<int>v;
	    while(!st.empty()) {
	        v.push_back(st.top());
	        st.pop();
	    }
	    return v;
	}


//BFS

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
