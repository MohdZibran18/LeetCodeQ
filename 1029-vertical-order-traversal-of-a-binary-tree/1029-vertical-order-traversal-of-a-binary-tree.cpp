class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        while (!todo.empty()) {
            auto p = todo.front();
            todo.pop();
            TreeNode* node = p.first;
            int ver = p.second.first, lvl = p.second.second;
            nodes[ver][lvl].insert(node->val);
            if (node->left) {
                todo.push({node->left, {ver - 1, lvl + 1}});
            }
            if (node->right) {
                todo.push({node->right, {ver + 1, lvl + 1}});
            }
        }
        vector<vector<int>> ans;
        for (auto it : nodes) {
            vector<int> v;
            for (auto t : it.second) {
                for (auto x : t.second) {
                    v.push_back(x);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
