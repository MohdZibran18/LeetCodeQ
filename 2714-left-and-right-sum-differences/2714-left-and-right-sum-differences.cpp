class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size()), right(nums.size()),ans(nums.size(),0);
        left[0]=0;
        right[nums.size()-1]=0;
        for(int i=1; i<nums.size(); i++){
             left[i]= nums[i-1]+left[i-1];   
        }
        for(int j=nums.size()-2;j>=0;j--){
            right[j] = right[j+1]+ nums[j+1];
        }
        
        for(int j=0;j<nums.size();j++){
           ans[j] = abs(left[j]-right[j]);
        }
        // cout<<"left"<<endl;
        // for(int i=0; i<nums.size(); i++){
        //      cout<<left[i]<<" ";   
        // }
        // cout<<"right"<<endl;
        // for(int i=0; i<nums.size(); i++){
        //      cout<<right[i]<<" ";   
        // }
        return ans;
    }
};