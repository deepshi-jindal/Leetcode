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
    int getDepth(TreeNode *root){
        if(root==NULL)
        {
            return 0;
        }
        int leftSubtreeDepth=getDepth(root->left);
        int rightSubtreeDepth=getDepth(root->right);
        return max(leftSubtreeDepth,rightSubtreeDepth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftSubtreeDiameter=diameterOfBinaryTree(root->left);
        int rightSubtreeDiameter=diameterOfBinaryTree(root->right);
        int diameter=getDepth(root->left)+getDepth(root->right);
          diameter=max(diameter,max(leftSubtreeDiameter,rightSubtreeDiameter));
        return diameter;
    }
};


