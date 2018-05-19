/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* prev,*cur,*next1,*value;
          prev=head;
          cur=head->next;
          value=head->next;
        while(cur&&cur->next){
             next1=cur->next;
            prev->next=next1;
            cur->next=next1->next;
            prev=next1;
            cur=next1->next;
            
        }
         prev->next=value;
         return head;
    }
};