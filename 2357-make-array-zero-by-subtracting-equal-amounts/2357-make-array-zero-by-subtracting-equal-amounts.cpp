class Solution {
public:
    int minimumOperations(vector<int>& nums) {
     priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:nums){
            pq.push(i);
        }
        int count=0;
        int a=0;
        while(!pq.empty()){
            if(pq.top()==0)
                pq.pop();
            else{
                int t=pq.top()-a;
                if(t!=0){
                    a+=t;
                    count++;
                }
                pq.pop();
            }
        }
          return count;
    }
};


   