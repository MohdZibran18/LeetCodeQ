class Solution {
public:
    int secondHighest(string s) {
        map<int,int>mp;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i])){
            mp[s[i]-'0']++;
            }
        }
        if(mp.size()<=1) return -1; int cnt=0;
        for(auto it = mp.rbegin();it!=mp.rend();++it ){ 
            if(cnt==1){ 
                return it->first;  
            }
            cnt++;
        }
        return -1;
    }
};