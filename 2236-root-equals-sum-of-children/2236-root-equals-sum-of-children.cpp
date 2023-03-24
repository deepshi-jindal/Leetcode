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
    bool checkTree(TreeNode* root) {
        if(root==NULL)
            return true;
    if(root->left==NULL && root->right==NULL)
     return true;
        int childsum=0;
        if(root->left){
            childsum+=root->left->val;
        }
        if(root->right){
            childsum+=root->right->val;
        }
        return (childsum==root->val && checkTree(root->left) && checkTree(root->right));
   
    }
};