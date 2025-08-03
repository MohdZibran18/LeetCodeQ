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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    //  V     lev     multiset which will sort the data 
    map<int,map<int,multiset<int>>>mp;
                //node        ver   lev
    queue<pair<TreeNode*,pair<int,int>>>que;
    que.push({root,{0,0}});
    while(!que.empty()){
        int size= que.size();
        for(int i=0;i<size;i++){
            auto ptr =que.front();
            TreeNode* node =ptr.first;
            int lvl=  ptr.second.second;
            int ver= ptr.second.first;
            que.pop();
            mp[ver][lvl].insert(node->val);
            if(node->left){
                que.push({node->left,{ver-1,lvl+1}});
            }
            if(node->right){
                que.push({node->right,{ver+1,lvl+1}});
            } 
        }
    }
    vector<vector<int>>ans1;
    for(auto it :mp ){
        vector<int>ans;
        for(auto it1 : it.second){
            for(auto it2 : it1.second ){
                ans.push_back(it2);
            }
        }
        ans1.push_back(ans);
    }
    return ans1;
    }
};