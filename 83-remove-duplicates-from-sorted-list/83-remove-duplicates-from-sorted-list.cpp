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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head == NULL) return head;
    ListNode *current , *tail;
    current = tail = head;
    while(current){
        if(current->val != tail->val) 
            tail = tail->next = current ;
        current = current->next;
    }
    tail->next = NULL;
   
    return head;
    }
};