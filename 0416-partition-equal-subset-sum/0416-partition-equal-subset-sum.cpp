class Solution {
public:
    bool solve(vector<int>&ans,int index,int tar,vector<vector<int>>&dp){
        if(tar==0) return true;
        if(index == 0) return (ans[index] == tar);
        if(tar<0) return false;
        if(dp[index][tar]!=-1){
            return dp[index][tar];
        }
        return dp[index][tar]=solve(ans,index-1,tar-ans[index],dp)|| solve(ans,index-1,tar,dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==1){
            return false;
        }
        int tar=sum/2;
        vector<vector<int>>dp(nums.size()+1,vector<int>(tar+1,-1));
        return solve(nums,nums.size()-1,sum/2,dp);
    }
};