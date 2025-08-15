class Solution {
public: 
    TreeNode* helper(TreeNode* root){
        //base case 
        //case 1 states that  left child is null so why don't u return the right child buddy.
        if(root->left==NULL) return root->right;
        //case 2  states that right child is null so why don't u return the left child buddy.
        if(root->right==NULL) return root->left;
        //case 3  states that both the  child is not null 
        TreeNode* rightNode=root->right;
        TreeNode *RightMostOfLeft = root->left;
        //left node ke sabse right node pe chale jao 
        while(RightMostOfLeft->right!=nullptr){
            RightMostOfLeft=RightMostOfLeft->right;
        }
        RightMostOfLeft->right=rightNode;
        return root->left; // root ko skip kar diya 
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return NULL;
        TreeNode* ptr=root;
        if(root->val==key){
            return helper(root);
        }
        while(root!=nullptr){
            if(root->val>key){
                if(root->left && root->left->val==key){
                    root->left=helper(root->left);
                    return ptr;
                }
                else {
                    root=root->left;
                }
            }
            else {
                if(root->right && root->right->val==key){
                    root->right=helper(root->right);
                    return ptr;
                }
                else {
                    root=root->right;
                }
            }
        }
        return ptr;
    }
};