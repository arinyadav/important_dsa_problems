APPROACH 2 using DFS

class Solution {
public:
     void dfs(vector<vector<pair<int, int>>> &adj, int curr, vector<int> &vis, int &mi)
    {
        if (vis[curr])
            return;
        vis[curr] = 1;
 
        for (auto nxt : adj[curr])
        {
            mi = min(mi, nxt.second);
            dfs(adj, nxt.first, vis, mi);
        }
 
        return;
    }
    int minScore(int n, vector<vector<int>> &roads)
    {
        vector<vector<pair<int, int>>> adj(n + 1);
 
        for (int i = 0; i < roads.size(); i++)
        {
            adj[roads[i][0]].push_back({roads[i][1], roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
 
        int mi = INT_MAX;
        vector<int> vis(n + 1, 0);
        dfs(adj, 1, vis, mi);
 
        return mi;
    }
};







class Solution {
public:
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
  int mini=INT_MAX;
    set<int> v;
    void dfs(int root,vector<vector<int>> &graph, vector<int> &visited){
        if(visited[root]==1)
            return;
        visited[root]=1;
        for(auto x:graph[root]){
            if(visited[x]==0){
                v.insert(x);
                dfs(x,graph,visited);
            }
        }
        return ;
    }
    int minScore(int n, vector<vector<int>>& roads) {
          map<pair<int,int>,int> m;
        for(auto x:roads){
            m[{min(x[0],x[1]),max(x[0],x[1])}]=x[2];
        }
        vector<vector<int>> graph(n+1);
        for(auto x:roads){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<int> visited(n+1,0);
        dfs(1,graph,visited);
        for (auto y : m)
        {
            if(v.find(y.first.first)!=v.end() || v.find(y.first.second)!=v.end()){
                mini=min(mini,y.second);
            }
        }
        return mini;
    }
};
