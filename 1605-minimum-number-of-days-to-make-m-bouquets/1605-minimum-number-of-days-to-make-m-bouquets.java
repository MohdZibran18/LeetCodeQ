class Solution {
    public int max(int[] nums){
        int maxi=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            if(maxi<nums[i]){
                maxi=Math.max(maxi,nums[i]);
            }
        }
       return maxi;
    }
    public int min(int[] nums){
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(mini>nums[i]){
                mini=Math.min(mini,nums[i]);
            }
        }
        return mini;
    }
    boolean possible(int[]nums ,int ele,int m, int k){
        int cnt=0;
        int ans=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<=ele){
                cnt++;
            }
            else {
                ans+=(cnt/k);
                cnt=0;
            }
        }
        ans+=(cnt/k);
        if(ans>=m) return true;
    return false ;
    }
    public int minDays(int[] nums, int m, int k) {
        int low=min(nums);
        int high=max(nums);
        System.out.println(low);
        System.out.println(m*k);
        System.out.println(nums.length);

        int ans=0;
        int mini=Integer.MAX_VALUE;
        if(Math.abs(m*k) > nums.length) return -1;
        while(low<=high){
          int  mid=low+(high-low)/2;
            if(possible(nums,mid,m,k)==true){
                mini=Math.min(mini,mid);
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return mini;
    }
}