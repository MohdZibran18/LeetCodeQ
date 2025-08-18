class Solution {
public:
        TreeNode* helper(vector<int>& preorder,int startPre,int endPre, 
    vector<int>& inorder,int startIn,int endIn, unordered_map<int,int>&mp){
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

    TreeNode* bstFromPreorder(vector<int>& preorder) {
      unordered_map<int,int>mp;
      vector<int>ans=preorder;
      sort(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++){
        mp[ans[i]]=i;
      }
      return helper(preorder,0,preorder.size()-1,ans,0,ans.size()-1,mp);
    }
};