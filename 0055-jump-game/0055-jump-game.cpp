class Solution {
public:
    unordered_map<int, bool> m;

    bool help(vector<int>& nums, int i) {
        if (i >= nums.size() - 1) {
            return true;
        }
        if (m.count(i)) return m[i]; 

        for (int j = 1; j <= nums[i]; j++) {
            if (help(nums, i + j)) {
                return m[i] = true;
            }
        }

        return m[i] = false; 
    }

    bool canJump(vector<int>& nums) {
        return help(nums, 0);
    }
};
