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
                if(i==0){
                    node->next=NULL;
                    ptr=node;
                }
               else {
                    node->next=ptr;
                    ptr=node;
               }
                   if(node->right!=NULL) que.push(node->right);
                   if(node->left!=NULL)  que.push(node->left);
            }
        }
        return root;
    }
};