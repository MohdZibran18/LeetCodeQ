class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum += nums[i];
        if(sum%2==1) return false;
        sum= sum/2;
         vector<vector<bool>>dp(nums.size(), vector<bool>(sum+1,false));
         // filling base case 
         for(int i=0;i<n;i++){
            dp[i][0]= true;
         }
         if (nums[0] <= sum) {
            dp[0][nums[0]] = true;
        }
         for(int i=1;i<n;i++){
            for(int j= 1 ;j <=sum ; j++){
                bool take = false;
                bool notTake = false;
                notTake= dp[i-1][j];
                if(nums[i] <= j){
                     take = dp[i-1][j - nums[i]];
                }
                 dp[i][j] = take || notTake;
            }
         }
        return dp[n-1][sum];
    }
};