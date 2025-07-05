class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int ans=-1;
        int n= arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==mp[arr[i]]){
                ans=max(ans,arr[i]);
            }
        }
        return ans;
    }
};