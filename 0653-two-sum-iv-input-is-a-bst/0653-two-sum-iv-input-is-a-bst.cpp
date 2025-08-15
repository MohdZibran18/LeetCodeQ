class Solution {
public:
    bool inorderHelper(TreeNode*root,unordered_map<int,int>&mp,int k){
        if(root==nullptr) return false;
        if(mp.find((k-root->val))!=mp.end()){
            return true;
        }
        mp[root->val]=1;
        return inorderHelper(root->left,mp,k) || inorderHelper(root->right,mp,k);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>mp;
        return inorderHelper(root,mp,k);
    }
};