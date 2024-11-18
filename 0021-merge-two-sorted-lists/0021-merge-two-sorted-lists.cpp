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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr){
            return list2;
        }
        else if(list2==nullptr){
            return list1;
        }
     ListNode* nums=new ListNode(-1);
     ListNode* temp=nums;
     ListNode* ptr1=list1;
     ListNode* ptr2=list2;
     while(ptr1!=nullptr&&ptr2!=nullptr){
         if(ptr1->val<=ptr2->val){
            temp->next=ptr1;
            ptr1=ptr1->next;
            temp=temp->next;
         }
         else {
            temp->next=ptr2;
            ptr2=ptr2->next;
             temp=temp->next;

         }
     }
     while(ptr1!=nullptr){
         temp->next=ptr1;
         ptr1=ptr1->next; 
         temp=temp->next;
 
     }
     while(ptr2!=nullptr){
        temp->next=ptr2;
        ptr2=ptr2->next;
        temp=temp->next;

     }
      return nums->next;
    }
};