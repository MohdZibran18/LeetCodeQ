class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1 && nums[i] != maxi ){
                return false;
            }
        }

        return maxi+1==nums.size() && mp[maxi]==2? true: false;
    }
};