class Solution {
public:
    int getMinDistance(vector<int>& nums, int tar, int st) {
        int j=nums.size()-1;
        int i=0;
        int mn=INT_MAX;
        int mx=INT_MAX;
        int n=nums.size();
        while(i<n&&j>=0){
            if(nums[i]==tar){
              mn =min(mn,abs(i-st));
            }
            if(nums[j]==tar){
             mx =min(mx,abs(j-st));
            }
            i++;j--;
        }
        return min(mx,mn);
    }
};