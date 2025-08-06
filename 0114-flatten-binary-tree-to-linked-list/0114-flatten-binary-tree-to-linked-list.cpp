class Solution {
public:
    void flatten(TreeNode* root) {
    TreeNode* curr = root;
    //removing extra space 
    while (curr) {
        if (curr->left) {
            TreeNode* prev = curr->left;
            while (prev->right) {
                prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
        }

        curr = curr->right;
    }
}

};