class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="",aa="";
      bool flag=false;
        for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
            flag=false;
                ans+= s[i];
           }
           else if(!flag){
            flag=true;
            reverse(ans.begin(),ans.end());
            aa=ans;
            temp+=ans;
            temp+=' ';
            ans="";
           }
           else {
            continue;
           }
        }
        reverse(ans.begin(),ans.end());
        temp+=ans;
        reverse(temp.begin(),temp.end());
        int i = 0;
        while (!temp.empty() && temp.back() == ' ') {
            temp.pop_back();
        }

        while (i < temp.size() && temp[i] == ' ') {
            i++;
        }
    temp = temp.substr(i);

        return temp;
    }
};