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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        vector<vector<int>>ans1;
        queue<TreeNode*>que;
        que.push(root);
        bool flag=true;
        while(!que.empty()){
            vector<int>ans;
            int size=que.size();
            for(int i=0;i<size;i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->left != nullptr){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
                ans.push_back(node->val);
            }
            if(flag){
                ans1.push_back(ans);
            }else{
                reverse(ans.begin(),ans.end());
                ans1.push_back(ans);
            }
            flag=!flag;
        }
        return ans1;
    }
};