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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr=head;
        if(head==nullptr){
            return head;
        }
        

        int cnt=0;
        while(ptr!=nullptr){
            cnt++;
            ptr=ptr->next;
        }
        int total=cnt-n;
        //edge case
        if (total == 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
        ptr=head;
        while(total>1){
            ptr=ptr->next;
            total--;
        }
        ListNode* temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;

        return head;
    }
};