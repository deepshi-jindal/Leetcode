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
class Solution {
public:
   void path(TreeNode*root, int l, int r, int& count){
        if(!root)
            return ;
        count=max(count,l);
        count=max(count,r);
        path(root->left,0, l+1 ,count);
        path(root->right,r+1,0,count);
        return;
        
    }
    int longestZigZag(TreeNode* root) {
        int count=0;
        int l=0;
        int r=0;
        path(root,l,r,count);
        return count;
        }
};