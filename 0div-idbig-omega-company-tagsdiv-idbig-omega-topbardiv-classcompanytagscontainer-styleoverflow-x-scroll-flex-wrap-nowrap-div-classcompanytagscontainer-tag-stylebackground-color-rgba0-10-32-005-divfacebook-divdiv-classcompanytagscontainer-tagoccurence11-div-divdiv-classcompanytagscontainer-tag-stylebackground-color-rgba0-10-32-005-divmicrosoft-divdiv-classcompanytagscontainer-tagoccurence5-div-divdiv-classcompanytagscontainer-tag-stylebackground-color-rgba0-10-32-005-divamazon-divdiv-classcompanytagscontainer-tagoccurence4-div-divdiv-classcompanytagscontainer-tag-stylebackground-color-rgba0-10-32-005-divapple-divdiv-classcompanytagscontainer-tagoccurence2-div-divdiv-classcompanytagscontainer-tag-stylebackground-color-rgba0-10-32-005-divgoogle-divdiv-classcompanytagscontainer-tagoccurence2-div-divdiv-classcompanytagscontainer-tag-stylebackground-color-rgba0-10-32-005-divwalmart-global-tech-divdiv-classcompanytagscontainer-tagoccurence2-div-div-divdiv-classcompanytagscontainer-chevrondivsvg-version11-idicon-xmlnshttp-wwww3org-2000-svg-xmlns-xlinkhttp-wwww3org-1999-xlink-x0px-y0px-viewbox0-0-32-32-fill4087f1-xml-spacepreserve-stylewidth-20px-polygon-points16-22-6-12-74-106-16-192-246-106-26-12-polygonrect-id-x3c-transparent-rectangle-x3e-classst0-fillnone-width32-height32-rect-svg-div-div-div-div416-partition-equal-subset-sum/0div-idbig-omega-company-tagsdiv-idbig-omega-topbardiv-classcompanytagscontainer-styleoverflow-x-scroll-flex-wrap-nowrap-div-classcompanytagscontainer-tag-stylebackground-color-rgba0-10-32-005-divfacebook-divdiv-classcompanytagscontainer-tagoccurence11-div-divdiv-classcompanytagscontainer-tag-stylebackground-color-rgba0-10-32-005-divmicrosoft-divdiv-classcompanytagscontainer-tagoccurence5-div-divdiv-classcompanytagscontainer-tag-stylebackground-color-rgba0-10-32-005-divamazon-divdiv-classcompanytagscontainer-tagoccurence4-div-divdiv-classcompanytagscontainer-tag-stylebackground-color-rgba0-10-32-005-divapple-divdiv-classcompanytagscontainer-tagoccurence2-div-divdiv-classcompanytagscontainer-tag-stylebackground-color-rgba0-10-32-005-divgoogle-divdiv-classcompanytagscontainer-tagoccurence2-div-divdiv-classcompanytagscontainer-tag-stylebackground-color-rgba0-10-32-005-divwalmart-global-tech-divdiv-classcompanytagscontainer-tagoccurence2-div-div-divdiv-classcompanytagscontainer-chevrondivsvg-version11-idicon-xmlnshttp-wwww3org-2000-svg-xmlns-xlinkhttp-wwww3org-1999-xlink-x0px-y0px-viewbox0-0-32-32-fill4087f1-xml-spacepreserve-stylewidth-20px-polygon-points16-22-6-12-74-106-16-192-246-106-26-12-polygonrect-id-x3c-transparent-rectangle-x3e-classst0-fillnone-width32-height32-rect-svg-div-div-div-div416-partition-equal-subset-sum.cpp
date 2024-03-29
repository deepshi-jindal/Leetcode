class Solution {
public:
bool isSubsetSum(int N, vector<int> &arr, int sum){
      
    bool dp[N+1][sum+1];
       for(int i=0;i<=N;i++)
       {
           for(int j=0;j<=sum;j++)
           {
               if(j==0)
               dp[i][j]=true;
               else if(i==0)
               dp[i][j]=false;
               else if(arr[i-1]<=j)
               {
                   dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
               }
               else
               dp[i][j]=dp[i-1][j];
           }
       }
       return dp[N][sum];
    }
    bool canPartition(vector<int>& nums) {
    
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0)
        return false;
        else
        sum/=2;
        return isSubsetSum(nums.size(),nums,sum);
    }
};