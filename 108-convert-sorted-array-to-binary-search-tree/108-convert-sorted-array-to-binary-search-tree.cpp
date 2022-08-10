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
    TreeNode* convertBST(int low,int high,vector<int> & arr){
        if(low<=high)
        {
        int mid=(low+high)/2;
        TreeNode *root=new TreeNode(arr[mid]);
        root->left=convertBST(low,mid-1,arr);
        root->right=convertBST(mid+1,high,arr);
        return root;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertBST(0,nums.size()-1,nums);
    }
};