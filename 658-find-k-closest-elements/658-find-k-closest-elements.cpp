class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        priority_queue<pair<int,int>> maxheap;
        for(int i=0;i<arr.size();i++){
            maxheap.push({abs(arr[i]-x),arr[i]});
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        while(maxheap.size()>0){
            ans.push_back(maxheap.top().second);
              maxheap.pop();
     }
        sort(ans.begin(), ans.end());
    return ans;
  }
};
        
 