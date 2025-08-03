class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            ans.pop();
        }
        return ans.top();
    }
};