class Solution {
public:
    void preOrder(TreeNode* root,vector<int>&ans){
        if(root==nullptr) return;
        ans.push_back(root->val);
        preOrder(root->left,ans);
        preOrder(root->right,ans);
    } 
    void flatten(TreeNode* root) {
        vector<int>ans;
        if (root == nullptr) return;
        preOrder(root,ans);
        TreeNode * ptr= new TreeNode(ans[0]);
        TreeNode * ptr1=ptr;
        for(int i=1;i<ans.size();i++){
            ptr->right=new TreeNode(ans[i]);
            ptr=ptr->right;
        }
        root->val = ptr1->val;
        root->left = nullptr;
        root->right = ptr1->right;
    }
};