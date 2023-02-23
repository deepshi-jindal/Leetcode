class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
    /*    long long ans=0;
        vector<vector<int>>count(n);
        for(const vector<int>&r:roads){
            ++count(r[0]);
            ++count(r[1]);
        }
        dort(begin(count),end(count));
         for(int i=0;i<n;i++){
             ans+=(i+1)*count[i];
         } 
        return ans;*/
        unordered_map<int,int>mp;
        for(auto it: roads){
            mp[it[0]]++;
            mp[it[1]]++;
        }
        long long ans=0;
        priority_queue<long long>pq;
        for(auto i:mp){
            pq.push(i.second);
        }
        while(!pq.empty()&&n){
            ans+=n*pq.top();
            pq.pop();
            n--;
        }
        return ans;
    }
};
//use priority queue because we have to find maximum 