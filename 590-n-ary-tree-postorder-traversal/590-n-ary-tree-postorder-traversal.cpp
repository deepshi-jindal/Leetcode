/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root)
            return ans;
        PO(root,ans);
        return ans;
    }
        void PO(Node *root, vector<int> &ans){
           // ans.push_back(root->val);
            for(int i=0;i<root->children.size();i++){
                PO(root->children[i], ans);
            }
            ans.push_back(root->val);
        }
    
};