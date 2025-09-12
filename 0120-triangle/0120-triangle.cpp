class Solution {
public:
    int solve(vector<vector<int>>& nums,int row,int col,vector<vector<int>>&dp){
        //base condition 
        if(row==0 && col ==0){
            return nums[row][col];
        }
       if(row < 0 || col < 0 || col > row) return INT_MAX;
       if(dp[row][col]!=-1) return dp[row][col];
        int top = solve(nums, row-1, col,dp);
        int dia=  solve(nums, row-1, col-1,dp);
        return dp[row][col]=nums[row][col]+ min(top,dia);
    }
    int minimumTotal(vector<vector<int>>& nums) {
        int n = nums.size();
         int m = nums[n-1].size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans1=INT_MAX;
       for(int i=m-1;i>=0;i--){
          int ans = solve(nums,n-1,i,dp);
            ans1 = min(ans1,ans);
        }
        return ans1;
    }
};