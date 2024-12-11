class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        if(nums.size()==1)
        {
            return 1;
            }
        int maxi=-1;
        for(auto it:nums){
            maxi=max(maxi,it);
        }
        int n=nums.size();
        vector<int>ans(maxi+1,0);
        for(int i=0;i<nums.size();i++){
           ans[max(nums[i]-k,0)]++;
           ans[min(nums[i]+k+1,maxi)]--;
        }
        int pref=0;
        int maxSum=0;
        for(auto it :ans){
         pref+=it;
         maxSum=max(maxSum,pref);
        }
        return maxSum;
    }
};