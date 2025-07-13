class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& nums, vector<int>& tr) {
        int cnt=0;
        int i=0,j=0;
        sort(nums.begin(),nums.end());
        sort(tr.begin(),tr.end());
        while(i<nums.size() &&  j<tr.size()){
            if(nums[i]<=tr[j] ){
                cnt++;
                i++;
            }
           j++;
        }
        return cnt;
    }
};