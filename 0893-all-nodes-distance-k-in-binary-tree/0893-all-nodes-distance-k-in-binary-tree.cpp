class Solution {
public:
    void levelOrder(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int size= que.size();
            for(int i=0;i<size;i++){
                TreeNode* node= que.front();
                que.pop();
                if(node->left){
                    parent[node->left]=node;
                    que.push(node->left);
                }
                if(node->right){
                  parent[node->right]=node;
                  que.push(node->right);
                }
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        int cnt=0;
        levelOrder(root,parent);
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>que;
        que.push(target);
         vis[target]=true;
        while(!que.empty()){
            int size=que.size();
            if(cnt==k) break;
            for(int i=0;i<size;i++){
                TreeNode *node = que.front();
                que.pop();
                //left ki condition 
                if(node->left && !vis[node->left]){
                    que.push(node->left);
                    vis[node->left]=true;
                }
                // right ki consition 
                if(node->right && !vis[node->right]){
                    que.push(node->right);
                    vis[node->right]=true;
                }
                // top ki condition 
                if(parent[node] && !vis[parent[node]]){
                    que.push(parent[node]);
                    vis[parent[node]]=true;
                }
            }
            cnt++;
        }
        vector<int>ans;
       while(!que.empty()){
        TreeNode* ptr=que.front();
        que.pop();
        ans.push_back(ptr->val);
       }
       return ans;
    }
};