/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/*class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                int index=(lefttoright) ? i:(size-1-i);
                row[index]=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(root->right);
                }
            }
            lefttoright=!lefttoright;
            ans.push_back(row);
        }
        return ans;
        
    }
};*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> result;
        deque<TreeNode*> Q;
        Q.push_front(root);
        bool reverse = true;
        while(!Q.empty()){
            int count = Q.size();
            vector<int> level_nodes;
            deque<TreeNode*> dQ;
            for(int i = 0; i < count; ++i){
                TreeNode* n = Q.front();
                level_nodes.push_back(n->val);
                Q.pop_front();
                if(reverse){
                    if(n->left) dQ.push_front(n->left);
                    if(n->right) dQ.push_front(n->right);
                } else {
                    if(n->right) dQ.push_front(n->right);
                    if(n->left) dQ.push_front(n->left);
                } 
            }
            Q.insert(Q.end(), dQ.begin(), dQ.end());
            result.push_back(level_nodes);
            reverse = !reverse;
        }
        return result;
    }
};