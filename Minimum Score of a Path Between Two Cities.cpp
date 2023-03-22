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
