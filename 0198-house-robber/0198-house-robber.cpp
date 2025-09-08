class Solution {
    
public:
    int solve(vector<int>&nums,int index,int n,vector<int>&dp){
        //base case 
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int a=nums[index]+solve(nums,index+2,n,dp);
        int b= solve(nums,index+1,n,dp);
        return dp[index]=max(a,b);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,nums.size(),dp);
    }
};