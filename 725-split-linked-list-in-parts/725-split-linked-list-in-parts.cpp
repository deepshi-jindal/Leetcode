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
    int getlength(ListNode *head){
        int length=0;
        while(head){
            head=head->next;
            length++;
        }
        return length;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int listlength=getlength(head);
        int partsize=listlength/k;
        int remaining_nodes= listlength%k;
        vector<ListNode*> ans;
       ListNode*curr=head;
        ListNode *prev=NULL;
        while(head){
            int eachpartsize= partsize;
            ans.push_back(curr);
            while(eachpartsize>0){
                prev=curr;
                curr=curr->next;
                eachpartsize--;
            }
            if(remaining_nodes!=0 && curr!=NULL){
                remaining_nodes--;
                prev=curr;
                curr=curr->next;
            }
            if(prev!=NULL){
                head=curr;
                prev->next=NULL;
            }
        }
        while(ans.size()!=k){
            ans.push_back(NULL);
        }
        return ans;
    }
};