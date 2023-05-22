class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(auto it:nums){
            map[it]++;
        }
        priority_queue<pair<int,int>> pq;
        vector<int>sol;
        for(auto it:map)
        pq.push({it.second,it.first});
        while(k--){
            sol.push_back(pq.top().second);
            pq.pop();       }
    
    return sol;
}
};
