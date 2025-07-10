class Solution {
    public int maximum(int[] nums) {
        int maxi = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        return maxi;
    }

    public int finding(int[] piles, int ele) {
        int ans = 0;
        for (int i = 0; i < piles.length; i++) {
            ans += Math.ceil((double)(piles[i]) /(double) ele); // Fixed
        }
        return ans;
    }

    public int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = maximum(piles);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (finding(piles, mid) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}