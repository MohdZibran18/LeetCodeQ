class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0;int high=nums.size()-1;
        while(low<=high){
            if(nums[low]+nums[high]==target){
                return {low,high};
            }
            if(nums[low]+nums[high]<target){
                low++;
            }
            else {
                high--;
            }
        }
        return {-1,-1};
    }
};