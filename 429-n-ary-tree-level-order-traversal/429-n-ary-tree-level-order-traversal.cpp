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
    vector<vector<int>> levelOrder(Node* root) {
       vector<vector<int>> res;
        if(root==NULL)
            return{};
         queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> ans;
            for(int i=0;i<size;i++){
                Node *temp=q.front();
                q.pop();
                ans.push_back(temp->val);
                for(auto n: temp->children)
                    q.push(n);
            }
            res.push_back(ans);
        }
        return res;
    }
};