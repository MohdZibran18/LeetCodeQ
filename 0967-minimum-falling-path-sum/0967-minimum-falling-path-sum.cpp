class Solution {
public:
    // int solve(vector<vector<int>>& nums, int row , int col,vector<vector<int>>&dp){
    //     // base case 
    //     if(row==0 && col< nums[0].size()){
    //         return nums[row][col];
    //     }
    //     if( col<0 || col+1 > nums[0].size() ){
    //         return INT_MAX;
    //     }
    //     if(dp[row][col]!=-1){
    //         return dp[row][col];
    //     }
    //     int up = ( col<0 ||col+1 > nums[0].size())?solve(nums,row-1,col,dp): INT_MAX;
    //     int leftDia=(col<0||col+1>nums[0].size()) ?solve(nums,row-1,col-1,dp): INT_MAX;
    //     int rightDia=(col<0||col+1>nums[0].size())?solve(nums, row-1,col+1,dp):INT_MAX;
    //     return dp[row][col]= nums[row][col] + min(min(up,leftDia),rightDia);
    // }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int n= nums.size();
        int m = nums[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       for (int col = 0; col < m; col++) {
          dp[0][col] = nums[0][col];
        }
        
        for(int row=1; row < n; row++){
            for(int col= 0; col < m; col++){
                int up = dp[row-1][col];
                int leftDia=(col > 0)  ? dp[row-1][col-1]: INT_MAX;
                int rightDia=( col+1 < m) ? dp[row-1][col+1]: INT_MAX;
                dp[row][col]= nums[row][col] + min(min(up,leftDia),rightDia);
            }
        }
        int ans= INT_MAX;
        for(int i=n-1;i>=0;i--){
            ans= min(ans,dp[n-1][i]);
        }
        return ans;
    }
};