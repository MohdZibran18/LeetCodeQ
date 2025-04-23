class Solution {
    private: 
        void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>> image,int dRow[],int dCol[],int scolor,int color){
            ans[row][col]=color;
            int n,m;
            n=image.size();
            m=image[0].size();
            for(int i=0;i<4;i++){
               int nrow=row+dRow[i];
               int ncol=col+dCol[i];
               if(nrow<n && nrow>=0 && ncol<m && ncol>=0&& ans[nrow][ncol]!=color&&ans[nrow][ncol]==scolor){
                dfs(nrow,ncol,ans,image,dRow,dCol,scolor,color);
               }
            }
        }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
       int startColor= ans[sr][sc];
       int dRow[]={-1,0,1,0};
       int dCol[]={0,1,0,-1};
        dfs(sr,sc,ans,image,dRow,dCol,startColor,color);
        return ans;
    }
};