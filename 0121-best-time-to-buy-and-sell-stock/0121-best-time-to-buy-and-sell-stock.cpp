class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int mini=INT_MAX;
        int maxi=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            else {
                maxi=max(maxi,arr[i]-mini);
            }
        }
        return maxi;
    }
};