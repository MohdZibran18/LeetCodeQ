class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        int size=ans.size();
        int size2=ans.size();
        while(size<=k){
          for(int i=0;i<size2;i++){
            if (ans[i] == 'z') {
            ans += 'a';
        } else {
            ans += char(ans[i] + 1);
        }
          }
            size2=ans.size();
          size=ans.size();
        }
        return ans[k-1];
    }
};