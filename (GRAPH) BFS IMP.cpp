WHEN ADJ LIST GIVEN

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector <int> bfs;
        vector <int> vis(V,0);
        queue <int> q;
        q.push(0);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto i:adj[node])
            {
                if(!vis[i])
                {
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return bfs;
    }




WHEN ADJ LIST NOT GIVEN

#include <bits/stdc++.h> 
#include <unordered_map>
#include <set>
#include <queue>
void prepareAdjList(unordered_map<int,set<int>> &adjList, vector<pair<int, int>> edges)
{
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>> &adjList, unordered_map<int,bool> &visited, vector<int> &ans, int node)
{
    queue<int>q;
    q.push(node);
    visited[node]=1;

    while(!q.empty())
    {
        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i: adjList[frontNode])
        {
          if (!visited[i]) {
            q.push(i);
            visited[i] = 1;
          }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>>adjList;
    vector<int>ans;
    unordered_map<int,bool>visited;

    prepareAdjList(adjList,edges);

    for
    (int i=0;i<vertex;i++)
    {
        if(!visited[i])
        {
            bfs(adjList,visited,ans,i);
        }
    }
    return ans;
}
