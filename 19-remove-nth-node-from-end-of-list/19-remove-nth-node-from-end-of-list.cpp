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
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* fast=start;
        ListNode* slow=start;
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete(temp);
        return start->next;
    }
};




/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode *L=head;
          ListNode* R=head;
        for(int i=0;i<n+1;i++){
            if(L==NULL){
                return head->next;
            }
        
        L=L->next;
        }
        while(L!=NULL){
            L=L->next;
            R=R->next;
        }
              R->next=R->next->next;
              return head;
    }
};*/