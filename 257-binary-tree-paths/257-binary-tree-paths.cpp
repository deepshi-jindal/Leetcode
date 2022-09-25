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
    void path(TreeNode*root, vector<string> &res,string curr){
        if(!root)
            return;
        if(root->left || root->right)
     curr+=(to_string(root->val)+"->");
         else{
            curr+=(to_string(root->val));
            res.push_back(curr);
        }
        path(root->left,res,curr);
        path(root->right,res,curr);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string curr="";
        path(root,res,curr);
        return res;
    }
};