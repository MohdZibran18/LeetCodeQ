class Solution {
public:
 int largest = INT_MIN;
     void  helper(TreeNode* root,int k,int &largest,int& counter){
         if(root== nullptr || counter>=k){
            return ;
         }
         helper(root->left,k,largest,counter);
          counter++;
         if(counter==k){
            largest=root->val;
            return;
         }
         helper(root->right,k,largest,counter);
     }
    int kthSmallest(TreeNode* root, int k) {
        int counter=0;
        helper(root,k,largest,counter);
        return largest;
    }
};