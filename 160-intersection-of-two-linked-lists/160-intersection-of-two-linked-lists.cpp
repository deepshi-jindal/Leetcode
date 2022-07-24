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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        int count1=0;
        int count2=0;
        while(headA){
            headA=headA->next;
            count1++;
        }
        while(headB){
            headB=headB->next;
            count2++;
        }
        while(count1>count2){
            count1--;
            a=a->next;
        }
          while(count2>count1){
            count2--;
            b=b->next;
        }
        while(a!=b){
            a=a->next;
            b=b->next;
        }
        return a;
    }
};