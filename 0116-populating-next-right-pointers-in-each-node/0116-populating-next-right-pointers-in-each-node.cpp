/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
    if(root == nullptr){
        return nullptr;  
    }
    root->next=nullptr;
    queue<Node*> que;
    que.push(root);
    
    while(!que.empty()){
        int size = que.size();
        int cnt=0;
        Node* add=nullptr;
        for(int i = 0; i < size; i++){
            auto node = que.front();
            que.pop();
            if(node->right){
                que.push(node->right);
            }
            if(node->left){
                que.push(node->left);
            }
            node->next=add;
            add=node;
        }
    }
    return root;
}

};