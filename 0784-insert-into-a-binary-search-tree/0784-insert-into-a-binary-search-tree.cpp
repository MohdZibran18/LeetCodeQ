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
      TreeNode* helper(TreeNode* root,int val){
        if(root==nullptr){
            return new TreeNode(val);
        }
        // condition which side we have to go 
        //right half;
        if(val>root->val){
            root->right=helper(root->right,val);
            return root;
        }
        else{
            root->left=helper(root->left,val);
            return root;
        }
      }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr) return new TreeNode(val);
        return helper(root,val);;
    }
};