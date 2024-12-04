class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0, first=0,second=0,sum=0;                                        
        string ans ="";   
        int i= a.length()-1;
        int j=b.length()-1;
        while(i>=0||j>=0){              
           if(i<0){  
            first=0;
           }else {
            first=a[i]-'0';
           }
           if(j<0){
            second=0;
           }else{
             second=b[j]-'0';
           }
           sum=carry+first+second;
           if(sum==0){
            ans+='0';
            carry=0;
           }
           else if(sum==1){
            ans+='1';
            carry=0;
           }
           else if(sum==2){
            ans+='0';
            carry=1;
           }
           else if(sum==3){
            ans+='1';
            carry=1;
           }
           i--;j--;
        }
        if(carry==1){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};