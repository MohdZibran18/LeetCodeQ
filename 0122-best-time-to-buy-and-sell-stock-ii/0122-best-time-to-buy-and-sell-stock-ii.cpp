class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int sum=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=arr[i-1]){
                sum=sum+(arr[i]-arr[i-1]);
            }
        }
        return sum;
    }
};