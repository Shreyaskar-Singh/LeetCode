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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr)
            return true;
        int l=length(head);
        ListNode* temp=head;
         for(int i=0;i<(l/2);i++){
           temp=temp->next;
         }
         ListNode* head2=reverse(temp);
         while(head2){
             if(head->val!=head2->val)
                 return false;
             head2=head2->next;
             head=head->next;
             
         }
          return true;
    }
      int length(ListNode* head){
         int c=0;
          while(head){
                c++;
                head=head->next;
             }
             return c;
      }
    
       ListNode*  reverse(ListNode* head){
              if(head==nullptr||head->next==nullptr)
                  return head;
            ListNode* prev,*cur,*next;
             prev=head;
             cur=head->next;
             while(cur){
                next=cur->next;
                cur->next=prev;
                 prev=cur;
                  cur=next;
             }
              head->next=nullptr;
             return prev;
       }
};