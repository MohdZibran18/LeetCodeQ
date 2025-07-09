class Solution {
    public int searchInsert(int[] nums, int tar) {
       int low = 0;
       int high = nums.length-1;
       int mid;
       while(low <= high){
        mid=low+(high - low /2);
         if( nums[mid]<tar){
            low=mid+1;
        }
        else if(nums[mid]>tar) {
           high = mid-1;
        }
        else {
            return mid;
        }
       }
    return low;
    }
}