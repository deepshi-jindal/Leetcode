class Solution {
public:
    unordered_map<int,vector<int>>mp;
    int ans=0,mx=0;
    
    void dfs(int manager,vector<int>&informTime){
        mx=max(mx,ans);
        for(auto emp:mp[manager]){
            ans+=informTime[manager];
            dfs(emp,informTime);
            ans-=informTime[manager];
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
       // vector<int>adj[n];
        for(int i=0;i<n;i++){
            int value=manager[i];
            if(value!=-1){
            mp[value].push_back(i);
            }
        }
        dfs(headID,informTime);
        return mx;
    }
};