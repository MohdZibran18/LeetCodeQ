class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans=nums; 
        vector<int > number;
        sort(ans.begin(),ans.end());
        for(int i=0;i<nums.size();i++ ){
            int cnt=0;
            for(int j=0;j<ans.size();j++){
                if(ans[j]<nums[i]){
                    cnt++;
                }
                else {
                    break;
                }
            }
            number.push_back(cnt);
        }
        return number;
    }
};