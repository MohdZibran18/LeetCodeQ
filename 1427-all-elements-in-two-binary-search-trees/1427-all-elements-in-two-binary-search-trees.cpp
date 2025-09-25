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
void inorder(TreeNode *root,vector<int>&ans){
    if(root==nullptr){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>A,B;
        inorder(root1,A);
        inorder(root2,B);
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<A.size()&& j<B.size()){
            if(A[i]<=B[j]){
                ans.push_back(A[i++]);
            }
            else {
                ans.push_back(B[j++]);
            }
        }
        while(i<A.size()){
             ans.push_back(A[i++]);
        }
        while(j<B.size()){
             ans.push_back(B[j++]);
        }
        return ans;
    }
};