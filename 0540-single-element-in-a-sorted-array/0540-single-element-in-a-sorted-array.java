class Solution {
    public int singleNonDuplicate(int[] nums) {
        //brute force is using xor 
        int ans=0;
        for(int i=0;i<nums.length;i++){
            ans^=nums[i];
        }
        return ans;
    }
}