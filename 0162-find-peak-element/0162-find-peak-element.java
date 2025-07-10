class Solution {
    public int findPeakElement(int[] nums) {
        //edge case 
        int n= nums.length;
        int low=1;
        int high=nums.length-2;
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0; // first two 
        if (nums[n - 1] > nums[n - 2]) return n - 1;// last two
       while(low<=high){
        int  mid=low+(high- low)/2;
        if( nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1] ){
            return mid;
        }
        //agar left me bada hai to 
        else if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
       }
        return 0;
    }
}