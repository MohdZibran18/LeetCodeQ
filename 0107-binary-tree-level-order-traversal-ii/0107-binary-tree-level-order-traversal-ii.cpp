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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         if (root == nullptr) return {};
        queue<TreeNode*>que;
        vector<vector<int>>ans;
        que.push(root);
        while(!que.empty()){
            int size= que.size();
            vector<int>list;
            for(int i=0;i<size;i++){
                TreeNode* node = que.front();
                 que.pop();
                if (node->left != nullptr) {
                que.push(node->left);
            }
            if (node->right != nullptr) {
                que.push(node->right);
            }
                list.push_back(node->val);
            }
            ans.push_back(list);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};