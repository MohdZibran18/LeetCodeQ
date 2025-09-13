class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int > mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int vowel=0,consonent=0;
        for(auto it : mp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                vowel= max(vowel,it.second);
            }
            else {
                consonent= max(consonent,it.second);
            }
        }
        return vowel+consonent;
    }
};