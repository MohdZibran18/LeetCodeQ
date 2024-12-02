class Solution {
public:
    int isPrefixOfWord(string s, string find) {
        vector<string>ans; string st="";
        int n=find.size()-1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans.push_back(st);
                st="";
            }
            if(s[i]!=' '){
              st+=s[i];
            }
        }
        ans.push_back(st);
        for(int i=0;i<ans.size();i++){
         if (ans[i].substr(0, find.size()) == find){
            return i+1;
          }
        }
         
return -1;
    }
};