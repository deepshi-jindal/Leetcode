class Solution {
public:
    void res(int index,int size, int n ,int k, vector<int> &temp,  vector<vector<int>> &ans){
        if(size==k){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<=n;i++)
        {
            temp.push_back(i);
            res(i+1,size+1,n,k,temp,ans);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        res(1,0,n,k,temp,ans);
        return ans;
    }
};