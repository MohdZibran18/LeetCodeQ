class Solution {
public:
   int sumOfGoodNumbers(vector<int>& nums, int k) {
    int sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        bool hasLeft = (i - k) >= 0;
        bool hasRight = (i + k) < n;
        bool isGood = true;

        if (hasLeft && nums[i] <= nums[i - k]) {
            isGood = false;
        }
        if (hasRight && nums[i] <= nums[i + k]) {
            isGood = false;
        }

        if (isGood) {
            sum += nums[i];
        }
    }

    return sum;
}


};