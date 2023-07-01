class Solution {
public:
    int ans=INT_MAX;
    void distribution(int start,vector<int>&cookies,vector<int>&v,int k){
        int n=cookies.size();
        if(start==n){
            int maxi=INT_MIN;
            for(int i=0;i<k;i++){
                maxi=max(maxi,v[i]);
            }
            ans=min(ans,maxi);
            return;
        }
        for(int i=0;i<k;i++){
            v[i]+=cookies[start];
            distribution(start+1,cookies,v,k);
            v[i]-=cookies[start];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>v(k,0);
        distribution(0,cookies,v,k);
        return ans;
    }
};