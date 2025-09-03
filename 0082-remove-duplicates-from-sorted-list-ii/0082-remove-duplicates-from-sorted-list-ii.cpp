
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr= head;
        ListNode* ptr1=head;
        map<int,int>mp;
        int cnt=0;
       while(ptr!=nullptr){
            mp[ptr->val]++;
            cnt++;
            ptr=ptr->next;
       }
       ListNode *dummy= new ListNode(-1);
       ListNode *dummy1=dummy;
       for(int i=0;i<cnt;i++){
            if(mp[ptr1->val]==1){
                dummy->next=ptr1;
                dummy=dummy->next;
            }
            ptr1=ptr1->next;
       }
       dummy->next=nullptr;
    return dummy1->next;
    }
};