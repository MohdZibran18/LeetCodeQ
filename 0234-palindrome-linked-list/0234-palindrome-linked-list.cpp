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
    bool isPalindrome(ListNode* head) {
        string ans="";
        ListNode* ptr=head;
        while(ptr!=nullptr){
            ans+=to_string(ptr->val);
            ptr=ptr->next;
        }
        int i=0;int j= ans.size()-1;
        while(i<j){
           if(ans[i++]!=ans[j--]){
            return false;
           }
        }
        return true;
    }
};