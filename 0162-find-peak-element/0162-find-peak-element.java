class Solution {
    public int findPeakElement(int[] nums) {
        //edge case 
       int maxi=Integer.MIN_VALUE;
        int ans=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ans=i;
            }
        }
        return ans;
    }
}