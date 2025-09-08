class Solution { 
public:
    int solve(vector<int>&nums,int index,int n,vector<int>&dp){
        //base case 
        if (index == 0) return nums[0];
        if (index < 0) return 0;
        if(dp[index]!=-1) return dp[index];
        int a=nums[index]+solve(nums,index-2,n,dp);
        int b= solve(nums,index-1,n,dp);
        return dp[index]= max(a,b);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
         vector<int>dp1(nums.size()+1,-1);
        int n= nums.size();
        if(n==1) return nums[0];
        vector<int>firstMiss,secondMiss;
        for(int i=0;i<n;i++){
            if(i!=0){
                firstMiss.push_back(nums[i]);
            }
        }
        for(int i=0;i<n-1;i++){
            secondMiss.push_back(nums[i]);
        }
        int ans1=solve(firstMiss,firstMiss.size()-1,firstMiss.size(),dp);
        int ans2= solve(secondMiss,secondMiss.size()-1,secondMiss.size(),dp1);
        return max(ans1,ans2);
    }
};