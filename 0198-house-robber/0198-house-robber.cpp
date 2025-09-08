class Solution {
    
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int n= nums.size();
        //base case 
        if(n==1) return nums[0];
        int prev = nums[0];
        int prev1=0;
        for(int i=1;i<n;i++){
            int a= nums[i];
            if(i>1){
                a+=prev1;
            }
            int b= prev;
            int curr= max(a,b);
            prev1= prev;
            prev= curr;
        }
        return prev;
    }
};