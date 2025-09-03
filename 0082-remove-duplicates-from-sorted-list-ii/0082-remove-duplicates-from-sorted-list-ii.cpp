
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode *dummy= new ListNode(-1);
    dummy ->next=head;
    ListNode *ptr= dummy;
    while(head!=nullptr){
        if(head->next && head->val == head->next->val){
            while(head->next && head->val == head->next->val){
                head=head->next;
            }
         dummy->next= head->next;
        }
        else {
            dummy=dummy->next;
        }
        head=head->next;
    }
    return ptr->next;
    }
};