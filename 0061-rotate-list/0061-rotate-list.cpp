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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        int nodes=1;
        ListNode* tail,*nhead;
        nhead=tail=head;
        while(tail->next){
            tail=tail->next;
            nodes++;
        }
        tail->next=head;
        if(k%=nodes){
            for(int i=0;i<nodes-k;i++)
                tail=tail->next;
        }
        nhead=tail->next;
        tail->next=NULL;
        return nhead;
    }
};