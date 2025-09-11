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
       return solve(nums,n-1,m-1,dp);   
    }
};