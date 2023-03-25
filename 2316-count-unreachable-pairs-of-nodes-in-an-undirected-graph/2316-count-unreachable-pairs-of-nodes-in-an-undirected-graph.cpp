class Solution {
public:
    int count;
    void dfs(int a, vector<vector<int>>&gr, vector<int>&vis){
        vis[a]=1;
        count++;
        for(auto c: gr[a])
            if(!vis[c])
                dfs(c,gr,vis);
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>>gr(n);
        for(auto &i: edges){
            gr[i[0]].push_back(i[1]);
             gr[i[1]].push_back(i[0]);
        }
        vector<int>res;
        vector<int> vis(n,0);
        for(int a=0;a<n;a++){
            if(!vis[a]){
                count=0;
                dfs(a,gr,vis);
                res.push_back(count);
            }
        }
        long long sum=0,presum=0,length=res.size();
        for(int a=0;a<length;a++){
            sum+=res[a]*presum; 
          //  presum -> number of nodes in connected components left to current connected component
            presum+=res[a];
        }
        return sum;
    }
};