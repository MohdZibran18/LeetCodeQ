class Solution {
public:
 int  maxPath(TreeNode *root,int &maxi){
     if(root==nullptr){
         return 0;
     }
     int lefty=max(0,maxPath(root->left,maxi));
     int righty=max(0,maxPath(root->right,maxi));
      // us node pe calculation kya hogi 
      maxi=max(maxi,root->val+lefty+righty);
     return max(lefty,righty)+root->val; // parent node ko kya return karega 

 }
    int maxPathSum(TreeNode* root) {
         int maxi=INT_MIN;
        int ans=maxPath(root,maxi);
        return maxi;
    }
};