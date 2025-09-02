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
    void buildBST(TreeNode * root, set<int>&st) {
     if(root==nullptr) return;
     buildBST(root->left,st);
     st.insert(root->val);
     buildBST(root->right,st);
}
    int findSecondMinimumValue(TreeNode* root) {
        set<int>st;
        buildBST(root,st);
        if(st.size()<=1) return -1;
      int cnt=1;
      
      cout<<st.size()<<" Size"<<endl;
        for (auto it = st.begin(); it != st.end(); it++) {
            if(cnt==2){
                return *it;
            }
            cnt++;
        }
        
        return -1 ;
    }
};