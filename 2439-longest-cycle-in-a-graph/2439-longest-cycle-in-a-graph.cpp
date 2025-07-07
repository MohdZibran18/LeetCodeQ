class Solution {
public:
  int mx=-1;
    void dfs(int node,vector<int>& edges,vector<int> &dis,vector<int> &vis,int curr){
      
        if(!vis[node]){
            vis[node]=1;
            dis[node]=curr;
            if (edges[node] != -1) {
                dfs(edges[node],edges,dis,vis,curr+1);
            }
            dis[node]=-1;
        }
        //backtrack
        else{
            if(dis[node]!=-1)
                 mx=max(curr-dis[node],mx);
        }
    }
    int longestCycle(vector<int>& edges) {
        
        vector<int> visited(edges.size(),0);
        vector<int>dis(edges.size(),-1);
        for(int i=0;i<edges.size();i++){
            if(!visited[i]){
                dfs(i,edges,dis,visited,0);
            }
        }
        return mx;
    }
};