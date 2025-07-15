class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp,mp1;
        vector<vector<int>>ans;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp1[nums2[i]]++;
        }
        vector<int>temp,temp1;
        for(int i=0;i<nums1.size();i++){
          if(mp1.find(nums1[i])==mp1.end()){
                temp.push_back(nums1[i]);
                mp1[nums1[i]]++;
          }  
        }
        for(int i=0;i<nums2.size();i++){
          if(mp.find(nums2[i])==mp.end()){
                temp1.push_back(nums2[i]);
                mp[nums2[i]]++;
          }  
        }
        ans.push_back(temp);
        ans.push_back(temp1);
        return ans;
    }
};