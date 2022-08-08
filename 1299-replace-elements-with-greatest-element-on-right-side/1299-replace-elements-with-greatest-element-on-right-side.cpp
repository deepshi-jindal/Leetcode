class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int n=arr.size(); 
        int maximum=-1;
        for(int i=n-1;i>=0;i--){
          if(arr[i]>maximum)
             swap(arr[i],maximum);
        
        else{
          arr[i]=maximum;
        }
}
        return arr;
    }
};
