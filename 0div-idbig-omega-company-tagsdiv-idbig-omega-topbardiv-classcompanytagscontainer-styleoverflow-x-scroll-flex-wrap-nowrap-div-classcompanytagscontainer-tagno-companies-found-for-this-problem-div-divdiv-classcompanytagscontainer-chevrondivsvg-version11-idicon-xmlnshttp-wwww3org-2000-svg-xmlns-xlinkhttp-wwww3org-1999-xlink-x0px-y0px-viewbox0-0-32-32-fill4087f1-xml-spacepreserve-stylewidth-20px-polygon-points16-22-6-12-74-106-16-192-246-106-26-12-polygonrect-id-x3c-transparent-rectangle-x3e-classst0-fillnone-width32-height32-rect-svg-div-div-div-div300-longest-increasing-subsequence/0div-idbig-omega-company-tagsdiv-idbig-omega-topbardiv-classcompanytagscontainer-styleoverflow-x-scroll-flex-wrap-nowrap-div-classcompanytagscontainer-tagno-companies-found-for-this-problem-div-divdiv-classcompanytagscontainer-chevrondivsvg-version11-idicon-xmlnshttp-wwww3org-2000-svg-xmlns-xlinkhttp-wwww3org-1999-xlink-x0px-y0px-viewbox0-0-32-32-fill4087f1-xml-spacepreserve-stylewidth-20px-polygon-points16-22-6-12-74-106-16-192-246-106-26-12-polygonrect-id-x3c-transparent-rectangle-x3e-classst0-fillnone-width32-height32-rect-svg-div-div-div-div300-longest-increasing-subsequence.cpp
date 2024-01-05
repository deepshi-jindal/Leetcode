//not working wrong approach
/*class Solution {
public:
      int lengthOfLIS(int arr[], int n) {
        vector<int>temp;  
          temp.push_back(arr[0]);
          int len=1;
          for(int i=1;i<n;i++){
              if(arr[i]>temp.back()){
                  temp.push_back(arr[i]);
              len++;
              }
              else{
                  int index
                      =lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin(); //error
                  temp[index]=arr[i];
              }
          }
      return len;     
    }
};


class Solution {
public:

    
int lengthOfLIS(vector<int>& a) {
     vector<int> lis;
     for (int i = 0; i < a.size(); i++) {
        auto it = lower_bound(lis.begin(), lis.end(), a[i]);
        if (it != lis.end()) *it = a[i];
        else lis.push_back(a[i]);
    }
    return lis.size();
}
};



*/


class Solution {
public:
    int lengthOfLIS(vector<int>& A)
    {
       int ans=1;
        int n=A.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
            if(A[j]<A[i]){
                dp[i]=max(dp[i],dp[j]+1);
            ans=max(ans,dp[i]);
            }
        }
    }

 return ans;
}
};

/*class Solution {
public:
    //RECURSION + MEMOIZATION
    int find(int ind , int prev ,vector<int>& arr,vector<vector<int>> &dp){
        if(ind == arr.size())return 0;
            
        if(dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        
        int len = 0+ find(ind+1,prev,arr,dp);
        if(prev==-1 || arr[ind]>arr[prev]){
            len = max(len,1+find(ind+1,ind,arr,dp));
        }
        return dp[ind][prev+1]= len;
    }
     int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return find(0,-1,nums,dp);
		}
};*/
    
