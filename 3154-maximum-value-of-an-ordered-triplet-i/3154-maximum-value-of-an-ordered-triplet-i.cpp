class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long  maxi=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    long long val=nums[i]-nums[j];
                    if(val<0){
                        val=0;
                    }
                    maxi=max((val)*nums[k],maxi);
                }
            }
        }
        return maxi;
    }
};