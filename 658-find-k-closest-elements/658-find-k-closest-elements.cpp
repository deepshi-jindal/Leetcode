/*class Solution {
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
      */  
 
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int lo = 0, hi = arr.size()-k;
        while (lo < hi){
            
            int mid = lo + (hi - lo)/2;
            if(x - arr[mid] > arr[mid + k] - x){
                lo = mid + 1;
            }else{
                hi = mid;
            }
            
        }
        
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[lo+i]);
        }
        
        return ans;
        
    }
};