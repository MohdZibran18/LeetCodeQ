class Solution {
public:
    bool doesAliceWin(string s) {
        int vowels=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vowels++;
        }
        if(vowels==0) return 0;
        else if(vowels%2==1){
            return 1;
        }
        return 1;
    }
};