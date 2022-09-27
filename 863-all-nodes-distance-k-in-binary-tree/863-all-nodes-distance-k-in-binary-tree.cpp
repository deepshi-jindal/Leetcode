/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
     void markparent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&track,TreeNode* target){
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            TreeNode* current=qu.front();
            qu.pop();
            if(current->left){
                track[current->left]=current;
                qu.push(current->left);
    }
       
                        if(current->right){
                track[current->right]=current;
                qu.push(current->right);
            }
            
        }
    }
    public:
  
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*> track;
        markparent(root,track,target);
        unordered_map<TreeNode* , bool> visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int curlev=0;
        while(!q.empty()){
            int size=q.size();
            if(curlev++==k)
            break;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=true;
                }
                
                 if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=true;
                }
                
                if(track[current] && !visited[track[current]]){
        q.push(track[current]);
                    visited[track[current]]=true;
                }
            }
        }
        vector<int> result;
        while(!q.empty()){
            TreeNode* current=q.front();
            q.pop();
            result.push_back(current->val);
        }
        return result;
    }
};