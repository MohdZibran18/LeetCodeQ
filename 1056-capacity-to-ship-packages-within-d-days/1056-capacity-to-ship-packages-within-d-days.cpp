class Solution {
public:
    int summation(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum;
}

int shipWithinDays(vector<int>& nums, int days) {
    int low = *max_element(nums.begin(), nums.end());
    int high = summation(nums);
    int ans = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int cnt = 1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                cnt++;
                sum = 0;
            }
            sum += nums[i];
        }

        if (cnt <= days) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

};