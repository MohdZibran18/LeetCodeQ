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
    int cnt=0;
    void dfs(TreeNode* root, long long t){
        if(root==nullptr){
            return;
        }
        t-=root->val;
        if(t==0){
            cnt++;
        }
        dfs(root->left,t);
        dfs(root->right,t);
    }
    void helper(TreeNode* root, long long t){
        if(root==nullptr){
            return;
        }
        dfs(root,t);
        helper(root->left,t);
        helper(root->right,t);
    }
    int pathSum(TreeNode* root, int targetSum) {
        helper(root,targetSum);
        return cnt;
    }
};