class Solution {
public:
    ListNode *detectCycle(ListNode *head) {  
       ListNode * slow=head,*fast=head;
       while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast){
          ListNode *a=head;
          ListNode *b=slow;
          while(a!=b){
            a=a->next;
            b=b->next;
          }
          return a;
        }
       }
        return NULL ;
    }
};