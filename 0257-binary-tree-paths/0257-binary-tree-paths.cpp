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
    void helper(TreeNode *root ,string ans,vector<string>&v)
  {
      //base case 
      if(root==nullptr){
          return ;
      }
      else if(root->left==nullptr&&root->right==nullptr){
          ans+=to_string(root->val);
          v.push_back(ans);
          return ;
      }
      ans+=to_string(root->val);
      ans+="->";
      helper(root->left,ans,v);
      helper(root->right,ans,v);    
  }
    vector<string> binaryTreePaths(TreeNode* root) {
        string ans="";
        vector<string>v;
        helper(root,ans,v);
        return v;
    }
};