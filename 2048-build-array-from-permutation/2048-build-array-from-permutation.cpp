class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int index;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
           index=nums[i];
           ans[i]=nums[nums[i]];
        }
        return ans;
    }
};