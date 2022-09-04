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
    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        map<int,map<int,multiset<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto e=q.front();
            q.pop();
            TreeNode* n=e.first;
            int x=e.second.first,y=e.second.second;
            m[x][y].insert(n->val);
            if(n->left)
                q.push({n->left,{x-1,y+1}});
            if(n->right)
                q.push({n->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto n:m)
        {
            vector<int> c;
            for(auto q:n.second)
            {
                c.insert(c.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(c);
        }
        return ans;
    }
};