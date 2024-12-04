class Solution {
public:
    int climbStairs(int n) {
    int ans1=0;
    vector<int>ans;
    ans.push_back(0);
    ans.push_back(1);
       for(int i=1;i<=n;i++){
       int first=ans[i-1];
       int second=ans[i];
       ans1=(first+second);
       ans.push_back(ans1);
       }
       return ans[ans.size()-1];
    }
};