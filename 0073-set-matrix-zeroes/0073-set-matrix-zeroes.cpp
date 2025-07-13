class Solution {
public:
    void helper(vector<vector<int>>& nums,int row , int col){
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(i==row || j==col){
                    nums[i][j]=0;
                }
            }
        }
    }
    void setZeroes(vector<vector<int>>& nums) {
        int n= nums.size();
        int m= nums[0].size();
       vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j]==0){
                    ans.push_back({i,j});
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            int row = ans[i][0];
            int col = ans[i][1];
            helper(nums,row,col);
        }
    }
};