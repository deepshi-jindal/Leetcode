/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
       Node* flatr(Node* head){
           Node *curr=head;
           Node *tail=head;
           while(curr){
               Node *child=curr->child;
               Node *next=curr->next;
               if(child){
                   Node *tail=flatr(child);
                   tail->next=next;
                   if(next)
                       next->prev=tail;
                   curr->next=child;
                   child->prev=curr;
                   curr->child=NULL;
                   curr=tail;
                  
               }
               else
                   curr=next;
               if(curr)
                   tail=curr;
           }
           return tail;
       }
    Node* flatten(Node* head) {
        if(head)
            flatr(head);
        return head;
    }
};