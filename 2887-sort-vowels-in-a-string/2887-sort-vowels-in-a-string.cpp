class Solution {
public:
    string sortVowels(string s) {
        vector<char>ans;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int k=0;
        for(int i=0;i<s.size();i++){
          if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] =='u'||
            s[i] =='A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
                   str.push_back(ans[k++]);
            }
            else {
                str.push_back(s[i]);
            }
        }
        return str;
    }
};