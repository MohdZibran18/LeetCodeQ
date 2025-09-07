class Solution {
public:
    vector<int> sumZero(int n) {
        int range= n;
       vector<int>ans;
       while(n>0){
         if(n%2==1){ 
            ans.push_back(0);
            n= n-1;
       }
       else {
        ans.push_back(range);
        ans.push_back(-range);
        n=n-2;
        range--;
       }
       }
       return ans;
    }
};