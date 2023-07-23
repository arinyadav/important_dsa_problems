 bool Cycle(int src,unordered_map<int,bool> &visited,vector<int> adj[]) {
       unordered_map<int,int>parent;
       queue<int>q;
       
       parent[src]=-1;
       visited[src]=1;
       q.push(src);
       
       while(!q.empty())
       {
           int front=q.front();
           q.pop();
           
           for(auto neighbour:adj[front])
           {
               if(visited[neighbour]==true && neighbour!=parent[front])
               return true;
               
               else if(!visited[neighbour]){
                   q.push(neighbour);
                   visited[neighbour]=1;
                   parent[neighbour]=front;
               }
           }
       }
       return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
       unordered_map<int,bool>visited;
       
       for(int i=0;i<V;i++)
       {
           if(!visited[i])
           {
               bool ans=Cycle(i,visited,adj);
               
               if(ans==true)
               return true;
           }
       }
       return false;
    }
