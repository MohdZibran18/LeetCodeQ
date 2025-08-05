class Solution {
public:
    int numOfUnplacedFruits(vector<int>& num1, vector<int>& num2) {
        vector<int>ans(num1.size(),0);
        int n= num1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(num1[i]<=num2[j] && ans[j]==0){
                    ans[j]=1;
                     break;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                cnt++;
            }
            
        }
    return cnt;
    }
};