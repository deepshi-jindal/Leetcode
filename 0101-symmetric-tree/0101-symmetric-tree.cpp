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
    
    bool isSymmetricCheck(TreeNode *left, TreeNode *right){
        
        if(!left && !right)
           return true;
             if(!left || ! right)
            return false;
        return left->val == right->val && isSymmetricCheck(left->left, right->right) && isSymmetricCheck(left->right, right->left);
        
    }
    
    bool isSymmetric(TreeNode* root) {
       if(!root)
           return true;
        return isSymmetricCheck(root->left, root->right);
            
    }
};
