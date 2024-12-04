class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        if(m>n){
            return false;
        }
        int i=0,j=0;
        int ascii=0,ascij=0;
        int cnt=0;
        while(i<n && j<m){
            ascii=(str1[i]-'0')+48;
            ascij=(str2[j]-'0')+48;
            if(ascii==ascij){
                i++;j++;
                cnt++;
                continue;
            }
            cout<<ascii<<" "<<i<<" "<<ascij<<" ";
            if(ascii==122){
                ascii=97;
            }
            if(ascii==ascij){
                cnt++;
                i++;j++;
            }
            else if(ascii!=ascij){

                if(ascii+1==str2[j]-'0'+48){
                    cnt++;
                    i++;j++;
                }
                else {
                    i++;
                }
            }
        }
        if(cnt==str2.size()){
            return true;
        }
        return false;
    }
};