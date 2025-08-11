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
    TreeNode* ptr;
  void ParentMapping(TreeNode *root ,unordered_map<TreeNode*,TreeNode*>&mp){
      queue<TreeNode*>que;
      que.push(root);
      while(!que.empty()){
          int size=que.size();
          for(int i=0;i<size;i++){
              auto node=que.front();
              que.pop();
              if(node ->left){
                  mp[node->left]=node;
                  que.push(node->left);
              }
              if(node ->right){
                  mp[node->right]=node;
                  que.push(node->right);
              }
          }
      }
  }
  void preorder(TreeNode * root,int target){
      if(root==nullptr) return;
      if(root->val==target) ptr=root;
      preorder(root->left,target);
      preorder(root->right,target);
  }


    int amountOfTime(TreeNode* root, int target) {
        unordered_map<TreeNode*,TreeNode*>mp; 
        queue<TreeNode*>que;
        unordered_map<TreeNode*,int>vis;
        
        preorder(root,target);
        ParentMapping(root,mp);
        
        int cnt=0;
        que.push(ptr);
        vis[ptr]=1;
        // cout<<"the target value is "<<ptr->data<<endl;
        while(!que.empty()){
            int size= que.size();
            for(int i=0;i<size;i++){
                auto node= que.front();
                que.pop();
                // for left 
                if(node->left && !vis[node->left]){
                    que.push(node->left);
                    vis[node->left]=1;
                }
                // for right
                if(node->right && !vis[node->right]){
                    que.push(node->right);
                    vis[node->right]=1;
                }
                // parent 
                if(mp[node] && !vis[mp[node]]){
                    que.push(mp[node]);
                    vis[mp[node]]=1;
                }
               
            }
             cnt++;
        }
       return cnt-1 ;
    }
};