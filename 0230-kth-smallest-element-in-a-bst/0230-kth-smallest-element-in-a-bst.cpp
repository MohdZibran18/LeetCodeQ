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
     void  helper(TreeNode* root,priority_queue<int,vector<int>,greater<int>>&pq){
         if(root==nullptr){
            return ;
         }
         pq.push(root->val);
         helper(root->left,pq);
         helper(root->right,pq);
     }
    int kthSmallest(TreeNode* root, int k) {
        //brute 
        priority_queue<int ,vector<int>,greater<int>>pq;
        helper(root,pq);
        k=k-1;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};