class Solution {
public:
    int canBeTypedWords(string text, string bL) {
        map<char, int>mp;
        for(int i=0;i<bL.size();i++){
            mp[bL[i]]++;
        } 
        int cnt=0;
        bool flag=true;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                if(flag) cnt++;
                flag=true;
            }
            else {
                if(mp.find(text[i])!=mp.end()){
                    flag=false;
                }
            } 
        }
        if(flag) cnt++;
        return cnt;
    }
};