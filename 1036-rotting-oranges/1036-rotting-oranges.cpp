class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<pair<int,int>,int>>que;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    que.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        int drow[]= {-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!que.empty()){
            int nrow=que.front().first.first;
            int ncol=que.front().first.second;
            int time=que.front().second;
            que.pop();
           
                //checking 
                ans=max(ans,time);
           
             for(int k=0;k<4;k++){
                int row = nrow + drow[k];
                int col = ncol + dcol[k];
               
                 if (row >= 0 && row < n && col >= 0 && col < m &&
                vis[row][col] != 2 && grid[row][col] == 1) {
                que.push({{row, col}, time + 1});
                vis[row][col] = 2;
            }
             }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1 ){
                    return -1;
                }
            }
        }
        return ans;
    }
};