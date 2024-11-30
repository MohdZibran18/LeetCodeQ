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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long unsigned int >>que;
        int maxi=0;
        que.push({root,0});
        while(!que.empty()){
            int size=que.size();
            int  start=que.front().second;
            int end =que.back().second;
            maxi=max(maxi,end-start+1);
            for(int i=0;i<size;i++){
                 auto [node,index]=que.front();
                que.pop();
                if(node->left!=nullptr) {
                    que.push({node->left,(index*2)+1});
                }
                if(node->right!=nullptr) {
                    que.push({node->right,(index*2)+2});
                }  
            }    
        }
       return maxi;
    }
};