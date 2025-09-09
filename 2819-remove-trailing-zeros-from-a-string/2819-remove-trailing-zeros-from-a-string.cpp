class Solution {
public:
    string removeTrailingZeros(string num) {
        int index;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]!='0'){
                 index=i;
                 break;
            }
        }
        string ans =num.substr(0,index+1);
    return ans ;
    }
};