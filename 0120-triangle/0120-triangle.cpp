class Solution {
public:
    int minimumTotal(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[n-1].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        dp[0][0] = nums[0][0];
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < nums[row].size(); col++) { 
                if (row == 0 && col == 0) continue;
                int top = (col<dp[row-1].size()) ?dp[row-1][col] :INT_MAX;
                int dia = ( col-1 >= 0) ? dp[row-1][col-1]:INT_MAX;
                dp[row][col] = nums[row][col] + min(top, dia);
            }
        }
        int ans1=INT_MAX;
        for(int i=0;i<m;i++){
            ans1= min(ans1,dp[n-1][i]);
        }
        return ans1;
    }
};
