class Solution {
public:
    int prefixCount(vector<string>& ans, string find) {
        int cnt=0;
    for(int i=0;i<ans.size();i++){
         if (ans[i].substr(0, find.size()) == find){
            cnt++;
          }
        } 
        return cnt;
    }
};