class Solution {
public: 
    TreeNode* helper(int low ,int high,vector<int>ans){
        if(low>high){
            return NULL;
        }   
        int mid=(low+high)/2;
        TreeNode* root = new TreeNode (ans[mid]);
        if(low >= 0){
            root->left= helper(low,mid-1,ans);
        }
        if(high < ans.size()){
            root->right=helper(mid+1,high,ans);
        }
        return root;
     }
    void inorder(TreeNode * root,vector<int>&ans,int target){
        if(root==nullptr) return ;
        inorder(root->left,ans,target);
        if(root->val!=target){
            ans.push_back(root->val);
        }
         inorder(root->right,ans,target);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return NULL;
        vector<int>ans;
        inorder(root,ans,key);
        return helper(0,ans.size()-1,ans);
    }
};