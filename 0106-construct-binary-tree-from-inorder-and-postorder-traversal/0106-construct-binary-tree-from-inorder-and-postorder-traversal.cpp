class Solution {
public:
TreeNode* helper(vector<int>&preorder,int startPre,int endPre,vector<int>&inorder,int startIn,int endIn,unordered_map<int,int>& mp) {
        if (startPre > endPre || startIn > endIn) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[startPre]);
        int indexIn = mp[preorder[startPre]];
        int numRight = endIn - indexIn;
        root->right = helper(preorder,startPre+1,startPre+numRight,inorder,indexIn+1,endIn,mp);
        root->left  = helper(preorder,startPre+numRight + 1,endPre,inorder,startIn,indexIn - 1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        reverse(postorder.begin(), postorder.end());
        return helper(postorder, 0, postorder.size() - 1,inorder, 0, inorder.size() - 1, mp);
    }
};
