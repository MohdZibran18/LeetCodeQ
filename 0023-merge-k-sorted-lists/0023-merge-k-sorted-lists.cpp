/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& head) {
        priority_queue<int ,vector<int>,greater<int>>pq;
        for (ListNode* listHead : head) {    
            ListNode* current = listHead;   
             while (current != nullptr) {   
                    pq.push(current->val); 
                    current = current->next; 
             }   
        }
        ListNode* ptr=new ListNode(-1);
          ListNode* ptr1=ptr;
        while(!pq.empty()){
             ptr->next= new ListNode(pq.top());
             ptr=ptr->next;
             pq.pop();
        }       
        // if (!pq.empty()) {
        //     return new ListNode(pq.top());
        // }
    return ptr1->next;
    }
};