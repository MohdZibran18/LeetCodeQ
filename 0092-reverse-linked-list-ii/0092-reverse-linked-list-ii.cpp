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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* ptr = head;
    ListNode *start = nullptr, *end = nullptr, *prev = nullptr, *next = nullptr;
    if(left == right) return head;
    int cnt = 1;
    while(ptr != nullptr){
        if(cnt == left) {
             start = ptr;
        }
        if(cnt == left-1) {
            prev = ptr;
        }
        if(cnt == right){
            end = ptr;
            next = ptr->next; 
        }
        cnt++;
        ptr = ptr->next;
    }
    ListNode* curr = start;
    ptr = nullptr;
    ListNode* next1 = nullptr;
    while(curr != end){  
        next1 = curr->next;
        curr->next = ptr;
        ptr = curr;
        curr = next1;
    }
    curr->next = ptr;
    if(prev) prev->next = end;  
    else head = end;     
    if(next) start->next = next;
    return head;
}

};