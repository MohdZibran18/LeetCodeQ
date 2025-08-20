class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,n = pushed.size(), m = popped.size(), j=0;
        stack<int>ans;
        while(i<n){
            ans.push(pushed[i]);
            while(!ans.empty()&& ans.top()==popped[j]){
                ans.pop();
                j++;
            }
            i++;
        }
        if(j>=m-1) return true;
        return false;
    }
};