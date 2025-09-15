class Solution {
public:
bool solve(vector<int>& nums,int sum,int index,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }if(index==0){
            return nums[0]==sum;
        }
        if(dp[index][sum]!=-1){
            return dp[index][sum];
        }
        bool take = false;
        bool notTake = false;
        notTake= solve(nums, sum, index-1,dp);
        if(nums[index] <= sum){
            take = solve(nums, sum - nums[index], index-1,dp);
        }
        return dp[index][sum]= take || notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum += nums[i];

        if(sum%2==1) return false;

        sum= sum/2;
         vector<vector<int>>dp(nums.size(), vector<int>(sum+1,-1));
        return solve(nums,sum,n-1,dp);
    }
};