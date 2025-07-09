class Solution {
   public int[] searchRange(int[] nums, int target) {
    if (nums.length == 0) return new int[]{-1, -1};

    int firstOcc = -1, lastOcc = -1;

    for (int i = 0; i < nums.length; i++) {
        if (nums[i] == target) {
            if (firstOcc == -1) firstOcc = i; 
            lastOcc = i; 
        }
    }

    return new int[]{firstOcc, lastOcc};
}

}