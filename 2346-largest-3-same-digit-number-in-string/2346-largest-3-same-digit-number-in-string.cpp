class Solution {
public:
    string largestGoodInteger(string num) {
        int n= num.size();
        string sub="";
        int ans=-1;
       for(int i=0;i<n;i++){
        sub=num.substr(i,3);
        if(sub=="999"|| sub=="888"||sub=="777"||sub=="666"|| 
        sub=="555"||sub=="444"|| sub=="333"|| sub=="222"||sub=="111"||sub=="000"){
            ans=max(ans,stoi(sub));
        }
       }
       if(ans==0) return "000";
       return ans==-1 ? "" : to_string(ans);
    }
};