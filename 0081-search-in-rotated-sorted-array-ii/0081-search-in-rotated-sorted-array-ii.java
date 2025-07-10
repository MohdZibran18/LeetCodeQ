class Solution {
    public boolean search(int[] nums, int target) {
        // brute will take the time complexuty of O(n)
        // came up with the optimal inary seach algorithm
        int low=0;
        int high=nums.length-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }
                else {
                    low=mid+1;
                }
            }
            else {
                if(target<=nums[high] && target>=nums[mid]){
                    low=mid+1;
                }
                else {
                    high=mid-1;;
                }
            }
        }
        return false;
    }
}