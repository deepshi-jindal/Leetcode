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
    ListNode *detectCycle(ListNode *head) {
        bool cycle=false;
        ListNode *slow, *fast;
        slow=fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
        
        if(slow==fast){
            cycle=true;
            break;
              }
    }
        if(cycle==false)
            return NULL;
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};