
class MyLinkedList {
    struct ListNode
    {
        int val;
        ListNode* next;
        ListNode( int x)
        {
            val=x;
            next=NULL;
        }
    };
public:
    ListNode* first=NULL;
    ListNode* last=NULL;
    int len=0;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index<len)
        {
            ListNode* curr=first;
            int currInd=0;
            while(currInd!=index)
            {
                currInd++;
                curr=curr->next;
            }
            return curr->val;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        ListNode* node=new ListNode(val);
        node->next=first;
        first=node;
        len++;
        if(last==NULL)
            last=first;
    }
    
    void addAtTail(int val) {
        ListNode* node=new ListNode(val);
        if(last)
            last->next=node;
        last=node;
        if(first==NULL)
            first=node;
        len++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>len)
            return ;
        if(index==len)
            addAtTail(val);
        else if(index==0)
            addAtHead(val);
        else{
            ListNode* curr=first;
            int currInd=0;
            while(currInd!=index-1)
            {
                currInd++;
                curr=curr->next;
            }
            ListNode* node=new ListNode(val);
            node->next=curr->next;
            curr->next=node;
            len++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index>=len)
            return ;
        if(index==0)
        {
            first=first->next;
            len--;
            if(first==NULL)
                last=NULL;
            return;
        }
        int currInd=0;
        ListNode* curr=first;
        while(currInd!=index-1)
        {
            currInd++;
            curr=curr->next;
        }
        if(index==len-1)
            last=curr;
        curr->next=curr->next->next;
        len--;
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */