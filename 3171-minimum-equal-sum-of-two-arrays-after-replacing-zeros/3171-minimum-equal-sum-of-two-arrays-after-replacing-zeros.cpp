class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        long long  cnt0=0,cnt1=0;
        for(long long i=0;i<nums1.size();i++){
          if(nums1[i]==0){
            nums1[i]=1;
            cnt0++;
          }
          sum1+=nums1[i];
        }
        for(long long i=0;i<nums2.size();i++){
          if(nums2[i]==0){
            nums2[i]=1;
            cnt1++;
          }
           sum2+=nums2[i];
        }
        if(cnt0==0 && cnt1==0 ){
            return sum1 == sum2 ? sum1 :-1;
        }
        else if (cnt0 == 0) {
            return sum2 <= sum1 ? sum1 : -1;
        } 
        else if (cnt1 == 0) {
            return sum1  <= sum2 ? sum2 : -1;
        } 
        return max(sum1,sum2);
    }
};