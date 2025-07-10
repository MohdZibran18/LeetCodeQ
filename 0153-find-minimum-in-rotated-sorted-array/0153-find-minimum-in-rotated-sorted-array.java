class Solution {
    public int findMin(int[] nums) {
        // return mini;
        // rotated and sorted so we can think of binary search
        int low=0,high=nums.length-1,mid;
        int ans=Integer.MAX_VALUE;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                ans=Math.min(ans,nums[low]);
                low=mid+1;
            }
            else if(nums[mid]<=nums[high]) {
                ans=Math.min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
}