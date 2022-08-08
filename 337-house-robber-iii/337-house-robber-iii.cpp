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
    unordered_map<TreeNode* , int> map;
    int rob(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(map.count(root))
            return (map[root]);
        int total=0;
        if(root->left)
            total+=rob(root->left->left) + rob(root->left->right);
        if(root->right)
             total+=rob(root->right->left) + rob(root->right->right);
        return map[root] =max(root->val+total,rob(root->left) + rob(root->right));
    }
};