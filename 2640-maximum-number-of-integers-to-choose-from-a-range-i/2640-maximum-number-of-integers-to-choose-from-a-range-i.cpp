class Solution {
public:
    int maxCount(vector<int>& ban, int n, int k) {
        set<int>st(ban.begin(), ban.end());
        int cnt=0,sum=0;
        for(int i=1;i<=n;i++){
                if(st.count(i)){
                     continue; 
                }
                sum+=i;
                 if(sum>k){
                    break;
                 }
                 cnt++;
            }
        return cnt;
    }
};