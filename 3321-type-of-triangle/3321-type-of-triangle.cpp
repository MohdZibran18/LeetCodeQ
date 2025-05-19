class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]){
            set<int>ans;
            for(auto it : nums){
                ans.insert(it);
            }
            if(ans.size()==1){
            return "equilateral";
            }
            else if(ans.size()==2){
                return "isosceles";
            }
            else {
                return "scalene";
            }
           }

           return "none";
    }
};