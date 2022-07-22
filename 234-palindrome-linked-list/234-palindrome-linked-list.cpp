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
/*class Solution {
public:
    bool isPalindrome(ListNode* head) {
      /*  ListNode *slow=head;
        stack<int> s;
        while(slow!=NULL){
            s.push(slow->val);
            slow=slow->next;
        }
        while(head!=NULL){
            int i=s.top();
            s.pop();
            if(head->val != i)
                return false;
            head=head->next;
        }
        return true;
     //   if(head==NULL || head->next==NULL)
       //     return true;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
        
        ListNode *reverseList(ListNode *head){
            ListNode *prev=NULL;
            ListNode *curr=head;
            ListNode *next;
            while(curr){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            return prev;
        }
    };*/
class Solution {
public:
    bool isPalindrome(ListNode* head)
    {
        // finding the mid
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // reversing the list from mid
        ListNode* ptr = NULL;
        ListNode* next = NULL;
        while(slow != NULL)
        {
            next = slow->next;
            slow->next = ptr;
            ptr = slow;
            slow = next;
        }
        
        // finally checking the elements with the reversed mid elements.
        while(ptr != NULL)
        {
            if(head->val != ptr->val)
            {
                return false;
            }
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }
};