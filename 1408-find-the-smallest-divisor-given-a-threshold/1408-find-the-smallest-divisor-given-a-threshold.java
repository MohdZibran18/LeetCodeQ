class Solution {
    public int max(int[] arr) {
    int maxVal = Integer.MIN_VALUE;
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
    }
    return maxVal;
}

public int min(int[] arr) {
    int minVal = Integer.MAX_VALUE;
    for (int num : arr) {
        if (num < minVal) minVal = num;
    }
    return minVal;
}
public int valueOf(int[] nums,int val){
    int sum=0;
    for(int i=0;i<nums.length;i++){
        sum = sum+ (int)Math.ceil((double)nums[i]/val);
    }
    return sum;
}
    public int smallestDivisor(int[] nums, int threshold) {
        int low=1;
        int high= max(nums);
        System.out.println(low);
        System.out.println(high);
        int answ=Integer.MAX_VALUE;
        while(low<=high){
           int mid = low+(high-low)/2;
            int sum = valueOf(nums,mid);
            // System.out.print("Sum is "+ sum +" ");
            if(sum>threshold){
                low=mid+1;      
            }
            else { 
                answ=Math.min(answ,mid); 
                high=mid-1;
            }
            
        }
    return answ;
    }
}