class Solution {
public:
    
    
    void dfs(int src,vector<int>&vis,vector<int>adj[]){
        vis[src]=1;
        for(int x:adj[src]){
            if(vis[x]==0){
                dfs(x,vis,adj);
            }
                
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            long long r1=bombs[i][2];
            long long x1=bombs[i][0];
            long long y1=bombs[i][1];
            for(int j=0;j<n;j++){
                if(i!=j){
                    long long x2=bombs[j][0], y2=bombs[j][1],r2=bombs[j][2];
                    long long d=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
                    long long p=r1;
                    if(d<=p*p){
                        cout<<i<<" "<<j<<endl;
                        adj[i].push_back(j); //directed
                    }
                }
            }
        }
        vector<int> vis(n);
        int ans=0;
        for(int i=0;i<n;i++){
           // int cnt=0;//
            //dfs(i,cnt,vis,adj);
            dfs(i,vis,adj);
            
             int cnt=0;
            for(int j=0;j<n;j++)
                if(vis[j]==1)  cnt++;
            ans=max(ans,cnt);
            fill(vis.begin(),vis.end(),0);
        }
        return ans;
    }
};