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
    int numComponents(ListNode* head, vector<int>& nums) {
        if(!head) return 0;
        if(!head->next) return 1;
        
        int count = 0;
        bool c=false;
        while(head){
            if(find(nums.begin(), nums.end(), head->val) != nums.end()){
                if(!c) count++;
                c= true;
            }else{
                c= false;
            }
            
            head = head->next;
        }
        
        return count;
    }
};