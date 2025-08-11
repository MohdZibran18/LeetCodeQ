class Solution {
public:
    TreeNode* helper(vector<int>& preorder,int startPre,int endPre, 
    vector<int>& inorder,int startIn,int endIn, unordered_map<int,int>&mp){
        //base ki koi bhi element nahi hai aage preorder ya in order ke paas traverse karne ke liye 
        if(startPre>endPre || startIn>endIn){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[startPre]);
        int indexIn=mp[preorder[startPre]];
        int numLeft= indexIn-startIn;
        root->left= helper(preorder,startPre+1,startPre+numLeft,inorder,startIn,indexIn-1,mp);
        root->right= helper(preorder,startPre+numLeft+1,endPre,inorder,indexIn+1,endIn,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root= helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};