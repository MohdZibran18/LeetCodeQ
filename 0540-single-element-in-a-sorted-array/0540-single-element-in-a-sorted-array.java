class Solution {
  public int singleNonDuplicate(int[] nums) {
    int low = 0, high = nums.length - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid == 0 || mid == nums.length - 1) {
            return nums[mid];
        }
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
            return nums[mid];
        }
        if (nums[mid] == nums[mid - 1]) {
            int leftCount = mid - low + 1;
            if (leftCount % 2 == 0) {
                low = mid + 1;
            } else {
                high = mid - 2;
            }
        }
        else if (nums[mid] == nums[mid + 1]) {
            int rightCount = high - mid + 1;
            if (rightCount % 2 == 0) {
                high = mid - 1;
            } else {
                low = mid + 2;
            }
        }
    }
    return -1;
}


}
