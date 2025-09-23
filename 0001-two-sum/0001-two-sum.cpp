class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
       map<int,int>mp;
       for (int i = 0; i < arr.size(); i++) {
        if (mp.find(tar - arr[i]) != mp.end()) {
            return {mp[tar - arr[i]], i}; 
        }
        mp[arr[i]] = i;
    }
       return {-1,-1};
    }
};