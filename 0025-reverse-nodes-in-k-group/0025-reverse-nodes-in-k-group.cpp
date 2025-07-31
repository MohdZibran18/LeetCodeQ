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
void reverse(vector<int>&ans, int start,int end){
    while(start<end){
        swap(ans[start],ans[end]);
        start++;
        end--;
    }
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>ans;
        ListNode * ptr =head;
        while(ptr!=nullptr){
            ans.push_back(ptr->val);
            ptr=ptr->next;
        }
        if(k>ans.size()) return head;
        int i=0;
        while(i<ans.size() && i+k<=ans.size()){
            reverse(ans,i,(i+k)-1);
            i+=k;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        ptr = new ListNode(-1);
        ListNode *ptr1 =ptr;
        for(int i=0;i<ans.size();i++){
            ptr->next= new ListNode(ans[i]);
            ptr=ptr->next;
        }
        
        return ptr1->next;
    }
};