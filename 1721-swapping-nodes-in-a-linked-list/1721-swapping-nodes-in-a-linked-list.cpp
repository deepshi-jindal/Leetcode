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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode  *beg=head;
        ListNode *end=head;
        ListNode *temp;
        while(--k)
            beg=beg->next;
            temp=beg;
        
        while(temp->next){
            end=end->next;
            temp=temp->next;
        }
        swap(beg->val, end->val);
        return head;
    }
};