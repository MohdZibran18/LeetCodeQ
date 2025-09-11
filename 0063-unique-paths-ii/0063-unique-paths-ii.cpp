class Solution {
public:
    int solve(vector<vector<int>>& nums, int row, int col, vector<vector<int>>&dp){
        //base case 
        if(row==0 && col==0 && nums[row][col]==0){
            return 1;
        }
        if(row<0 || col<0 || nums[row][col]==1){
            return 0;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int top =  solve(nums,row-1,col,dp);
        int left = solve(nums,row,col-1,dp);
        return dp[row][col] = top+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
         int n= nums.size();
         int m= nums[0].size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
       //tabulation 
        if(nums[0][0]==0){
            dp[0][0]=1;
        }else {
            dp[0][0]=0;
        }
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 int top,left;
                    if(i==0 && j==0){
                        continue;
                    }
                    else {
                        int left =(j > 0 && nums[i][j]==0) ? dp[i][j - 1] : 0;
                        int top = (i > 0 && nums[i][j]==0) ? dp[i - 1][j] : 0;
                        dp[i][j] = left + top;
                     }
             } 
       }
       return dp[n-1][m-1]; 
    }
};