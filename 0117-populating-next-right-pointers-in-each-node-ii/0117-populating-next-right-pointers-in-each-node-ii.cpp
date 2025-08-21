class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr){
            return nullptr;
        }
        root->next=NULL;
        queue<Node*>que;
        que.push(root);
        Node*ptr=NULL;
        while(!que.empty()){
            int size= que.size();
            ptr=NULL;
            for(int i=0;i<size;i++){
                auto node= que.front();
                que.pop();
                if(node->val!=-101){
                    if(node->right){
                        que.push(node->right);
                    }
                    if(node->left){
                        que.push(node->left);
                    }
                    else {
                        que.push(new Node(-101));
                    }
                    node->next=ptr;
                    ptr=node;
                }
            }
        }
        return root;
    }
};