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
    vector<int> largestValues(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty()){
           int maxi=INT_MIN;
            int size = q.size();
            for(int i=0; i<size; i++){
            TreeNode *node = q.front();
            q.pop();
            maxi=max(maxi,node->val);
            if(node->left!=nullptr){
                q.push(node->left);
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};