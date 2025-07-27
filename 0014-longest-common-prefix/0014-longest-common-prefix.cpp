class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans ="", temp="";
     int i=0;int j=0;
        ans=str[0];
        for(i=1;i<str.size();i++){
             temp = "";   
             j = 0;  
            while(j<str[i].size() && j < ans.size()){
                if(ans[j]==str[i][j]){
                    temp+=str[i][j];
                }
                else{
                    break;
                }
                j++;
            }
             ans=temp;
        }
        return ans;
    }
};