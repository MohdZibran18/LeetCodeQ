class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n= nums.size();
        int low= 0;
        int high= n-1;
        while(low<=high){
            int mid=(low+high)/2;
           if(nums[mid]-(mid+1)<k){
                //missing no are low
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return high+k+1;
        //logn 
    }
};