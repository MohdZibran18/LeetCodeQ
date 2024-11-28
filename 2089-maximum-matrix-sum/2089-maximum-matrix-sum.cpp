class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) {
        long long neg_no=0,sum =0;
        int mn=INT_MAX;
        for (auto bt :m){
            for (auto it:bt){
            if (it<0) neg_no++;
            mn=min(mn,abs(it));
            sum+=abs(it);
            }
        }
        if ((neg_no & 1)!=1) return sum;
        return   sum-(mn*2);
        

    }
};