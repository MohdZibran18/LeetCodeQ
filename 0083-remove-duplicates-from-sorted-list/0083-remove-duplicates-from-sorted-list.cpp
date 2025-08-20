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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return NULL;
        ListNode* ptr=head;
        ListNode* Next= head->next;
        // if(Next->next==nullptr && ptr->val== Next->val){
        //     ptr->next=nullptr;
        //     return ptr;
        // }
        while(ptr!=nullptr && Next!=nullptr ){
            if(ptr->val==Next->val){
                Next=Next->next;
            }
            else {
                ptr->next= Next;
                ptr=Next;
                Next=Next->next;
            }
        }
        if(Next==nullptr){
            ptr->next=nullptr;
        }
        return head;
    }
};