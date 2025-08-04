/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
       TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==nullptr || root==p || root==q){
            return root;
        }
        TreeNode *left= helper(root->left,p,q);
        TreeNode* right= helper(root->right,p,q);
        
        if(left!=nullptr && right!=nullptr){
            return root;
        }
        if(left!=nullptr) return left;
        return right;
       }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = helper(root,p,q);
        return ans;
    }
};