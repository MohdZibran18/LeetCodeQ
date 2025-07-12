class Solution {
public:
    int findMaxK(vector<int>& nums) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    int maxi = -1001;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end() && mp.find(-nums[i])!=mp.end()){
            maxi=max(nums[i],maxi);
        }
    }
    return maxi==-1001 ? -1 : maxi;
    }
};