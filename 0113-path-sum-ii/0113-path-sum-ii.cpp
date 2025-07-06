/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void helper(TreeNode* root,vector<vector<int>>&ans,vector<int>temp, int t){
    if(root==NULL ){
        return;
    }
     t-=root->val;
     temp.push_back(root->val);
    if(root->left==nullptr && root->right==nullptr && t==0){
        ans.push_back(temp);
    }
    helper(root->left,ans,temp,t);
    helper(root->right,ans,temp,t);
    //backtrack
    temp.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(root,ans,temp,targetSum);
        return ans;
    }
};