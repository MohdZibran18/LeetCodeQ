class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> left(nums.size()), right(nums.size());
        left[0]=nums[0];
        right[nums.size()-1]=nums[nums.size()-1];
        for(int i=1; i<nums.size(); i++){
             left[i]= nums[i]+left[i-1];   
        }
        for(int j=nums.size()-2;j>=0;j--){
            right[j] = right[j+1]+ nums[j];
        }
        for(int i=0;i<nums.size();i++){
            if(left[i]==right[i]){
                return i;
            }
        }
        return -1;
    }
};