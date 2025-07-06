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
    bool ans=false;
    void helper(TreeNode* root, int t){
        if(root==nullptr){
            return;
        }
        t-=root->val;
        if(root->left==NULL && root->right==NULL && t==0){
            ans=true;

        }
        helper(root->left,t);
        helper(root->right,t);
    }
    bool hasPathSum(TreeNode* root, int t) {
        helper(root,t);
       return ans;
    }
};