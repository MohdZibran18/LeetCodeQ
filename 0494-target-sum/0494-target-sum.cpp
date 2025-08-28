class Solution {
public: 
    int solve(vector<int>& nums, int target , int sum , int i){
        //base case 
        if(i>=nums.size()){
            return target==sum;
        }
    int a = solve(nums,target , sum+nums[i],i+1); 
    int b = solve(nums,target , sum-nums[i],i+1);
    return a+b;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};