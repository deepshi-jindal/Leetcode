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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode *end=head;
        int c=0;
        while(end->next){
            end=end->next;
            c++;
        }
        c= c&1? c/2+1 : c/2;
        ListNode *temp=head;
        while(c--){
            end->next=temp->next;
            temp->next=temp->next->next;
            end->next->next=NULL;
            temp=temp->next;
            end=end->next;
        }
         return head;   
        
    }
};