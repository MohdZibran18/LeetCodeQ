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
  bool isLeaf(TreeNode* root){
    return root!=nullptr&&root->left==nullptr&&root->right==nullptr;
      }
    bool checkTree(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        if(isLeaf(root)){
            return true;
        }
        int left= 0;
        int right=0;
        if(root->left!=nullptr){
            left=root->left->val;
        }
        if(root->right!=nullptr){
            right=root->right->val;
        }
        if(root->val!=left+right){
            return false;
        }
        return checkTree( root->left)&&checkTree(root->right);
    }
};