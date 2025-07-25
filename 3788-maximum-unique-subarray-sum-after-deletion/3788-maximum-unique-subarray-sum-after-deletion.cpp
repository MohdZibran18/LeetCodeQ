class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=INT_MIN;int mini=INT_MAX;int ans=INT_MIN;
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) {
                mini=nums[i];
                ans=max(ans,mini);
                // continue;
            }  
            else if(mp.find(nums[i])==mp.end()){
                sum+=nums[i];
                mp.insert({nums[i],1});
                maxi=max(sum,maxi);
            } 
            if(sum<0) sum=0;
        }
        return maxi==INT_MIN ? ans: maxi;
    }
};