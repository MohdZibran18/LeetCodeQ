class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<pair<int,int>>stack;
        int n= nums.size();
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
             while(!stack.empty() && stack.top().first<=nums[i]){
                    stack.pop();
                }
            if(!stack.empty()){
                ans[i]= stack.top().second - i;
            }
            stack.push({nums[i],i});
        }
        return ans;
    }
};