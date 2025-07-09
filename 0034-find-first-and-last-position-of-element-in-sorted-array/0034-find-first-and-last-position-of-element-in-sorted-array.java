class Solution {
    public int lowerBound(int[] nums, int target){
        int low=0,high=nums.length-1,mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
           else if(nums[mid]<target){
                low=mid+1;
            }  
            else if(nums[mid]>target){
                // ans=mid;
                high=mid-1;
            }
        }return ans ;
    }
    public int upperBound(int[] nums, int target){
        int low=0,high=nums.length-1,mid;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
           else if(nums[mid]<target){
                low=mid+1;
            }  
            else if(nums[mid]>target){
                // ans=mid;
                high=mid-1;
            }
        }return ans ;
    }
   public int[] searchRange(int[] nums, int target) {
    //first occ means lower bound and last occ mens upper bound 
    // edge case
     if (nums.length == 0) return new int[]{-1, -1};
    int firstOcc=lowerBound(nums,target);
    int secondOcc=upperBound(nums,target);
    return new int[]{firstOcc, secondOcc};
}

}