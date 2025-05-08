class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>>que;
        int n= grid.size();
        int m= grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
           if(grid[0][j]==1){
            que.push({0,j});
           }
           if(grid[n-1][j]==1){
            que.push({n-1,j});
           }
        }
        for(int i=0;i<n;i++){
           if(grid[i][0]==1){
            que.push({i,0});
           }
           if(grid[i][m-1]==1){
            que.push({i,m-1});
           }
        }
        int drow[] ={-1,0,1,0};
        int dcol[]= {0,1,0,-1};
        while(!que.empty()){
            int row= que.front().first;
            int col=que.front().second;
            que.pop();
            vis[row][col]=1;
            for(int i=0;i<4;i++){
                int nrow= row+drow[i];
                int ncol= col+dcol[i];
                if(nrow < n && nrow >= 0 && ncol<m && ncol>=0 && vis[nrow][ncol]==0&& grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    que.push({nrow,ncol});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  if(grid[i][j]==1 && vis[i][j]==0){
                    cnt++;
                  }
            }
        }
        return cnt;
    }
};