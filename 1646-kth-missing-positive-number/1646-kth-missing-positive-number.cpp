class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        // brute 
        int mxi=*max_element(nums.begin(), nums.end());
        vector<int>ans(mxi+k+1,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]=1;
        }
        int ans1=0,count=0;
        for(int i=1;i<=ans.size();i++){
           if (ans[i] == 0) {
            count++;
            if (count == k) return i;
        }
        }
        return ans1-1;
    }
};