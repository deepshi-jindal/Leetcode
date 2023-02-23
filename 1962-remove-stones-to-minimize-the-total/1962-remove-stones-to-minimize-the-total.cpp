class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto&i:piles)
            pq.push(i);
        while(!pq.empty()&&k){
            int top=pq.top();
            pq.pop();
            pq.push(top-top/2);
            k--;
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};