class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>wD;
        wD.push_back(nums[0]);
        wD.push_back(nums[1]);
        for(int i=2;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                wD.push_back(nums[i]);
            }
        }
        wD.push_back(nums[nums.size()-1]);
        int ans=0;
        if(wD.size()<3) return 0;
        for(int i=1;i<wD.size()-1;i++){
                if(wD[i]>wD[i+1] && wD[i]>wD[i-1]){
                    ans++;
                }
                else if(wD[i]<wD[i+1] && wD[i]<wD[i-1]){
                    ans++;
                }
        }
        return ans;
    }
};