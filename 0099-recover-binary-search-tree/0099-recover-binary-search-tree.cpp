class Solution {
public:
     void inorder(TreeNode* root,vector<int>&ans){
         if(root==nullptr){
            return;
         }
         inorder(root->left,ans);
         ans.push_back(root->val);
         inorder(root->right,ans);
     }
     void helper(TreeNode* root,int &i,vector<int>ans){
        if(root==nullptr) return;
        helper(root->left,i,ans);
        root->val=ans[i++];
        helper(root->right,i,ans);
     }
    void recoverTree(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int first=-1,second=-1;
    for(int i = 1;i<ans.size(); i++) {
        if(ans[i] < ans[i-1]) {
            if(first == -1) {
                first=i-1;
            }
            second = i;
        }
    }
        int val=0;
        swap(ans[first], ans[second]);
        helper(root,val,ans);
    }
};