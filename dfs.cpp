#include<bits/stdc++.h>
using namespace std;
class solution
{
    void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storedfs)
    {
        storedfs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj,storedfs);
            }
        }
    }
public:
vector<int>dfsofgraph(int V,vector<int>adj[])
{
   vector<int>storedfs;
   vector<int>vis(V+1,0);
   for(int i=0;i<=V;i++)
   {
       if(!vis[i])
       {
           dfs(i,vis,adj,storedfs);
       }
   }
   return storedfs;
}
};
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    vector<int>adj[6];
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,1,5);
    addEdge(adj,2,4);
    addEdge(adj,2,1);
    addEdge(adj,3,1);
    addEdge(adj,4,1);
    addEdge(adj,4,2);
    addEdge(adj,5,1);
    solution obj;
    vector<int>df;
    df=obj.dfsofgraph(6,adj);
    for(auto it:df){
        cout<<it<<" ";
    }
    return 0;
}

