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
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp=head;
        ListNode* head1=new ListNode(0);
        ListNode* head2=new ListNode(0);
        ListNode *curr1=head1;
        ListNode *curr2=head2;
        while(temp){
            if(temp->val <x){
            curr1->next=new ListNode(temp->val);
            curr1=curr1->next;
            }
            else{
                curr2->next=new ListNode(temp->val);
            curr2=curr2->next;
            }
            temp=temp->next;
        }
        curr1->next=head2->next;
        curr2->next=NULL;
        return head1->next;
    }
};