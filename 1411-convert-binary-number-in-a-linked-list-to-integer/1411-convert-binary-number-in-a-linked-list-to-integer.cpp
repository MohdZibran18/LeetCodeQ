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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr, *ptr1;
        ptr=head;
        ptr1 =head;
        int cnt=0;
        int ans=0;
        while(ptr!=nullptr){
            cnt++;
            ptr=ptr->next;
        }
        int n=cnt;
        for(int i=0;i<n;i++){
            ans+= (ptr1->val * pow(2,cnt-1));
            cnt--;
            ptr1=ptr1->next;
        }
        return ans;
    }
};