class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool swapped = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0 || nums[i] > nums.size()) {
                continue;
            }
            int ans = nums[i];
            if (nums[ans - 1] != ans) {
                swap(nums[i], nums[ans - 1]);
                swapped = true;
                i--;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};