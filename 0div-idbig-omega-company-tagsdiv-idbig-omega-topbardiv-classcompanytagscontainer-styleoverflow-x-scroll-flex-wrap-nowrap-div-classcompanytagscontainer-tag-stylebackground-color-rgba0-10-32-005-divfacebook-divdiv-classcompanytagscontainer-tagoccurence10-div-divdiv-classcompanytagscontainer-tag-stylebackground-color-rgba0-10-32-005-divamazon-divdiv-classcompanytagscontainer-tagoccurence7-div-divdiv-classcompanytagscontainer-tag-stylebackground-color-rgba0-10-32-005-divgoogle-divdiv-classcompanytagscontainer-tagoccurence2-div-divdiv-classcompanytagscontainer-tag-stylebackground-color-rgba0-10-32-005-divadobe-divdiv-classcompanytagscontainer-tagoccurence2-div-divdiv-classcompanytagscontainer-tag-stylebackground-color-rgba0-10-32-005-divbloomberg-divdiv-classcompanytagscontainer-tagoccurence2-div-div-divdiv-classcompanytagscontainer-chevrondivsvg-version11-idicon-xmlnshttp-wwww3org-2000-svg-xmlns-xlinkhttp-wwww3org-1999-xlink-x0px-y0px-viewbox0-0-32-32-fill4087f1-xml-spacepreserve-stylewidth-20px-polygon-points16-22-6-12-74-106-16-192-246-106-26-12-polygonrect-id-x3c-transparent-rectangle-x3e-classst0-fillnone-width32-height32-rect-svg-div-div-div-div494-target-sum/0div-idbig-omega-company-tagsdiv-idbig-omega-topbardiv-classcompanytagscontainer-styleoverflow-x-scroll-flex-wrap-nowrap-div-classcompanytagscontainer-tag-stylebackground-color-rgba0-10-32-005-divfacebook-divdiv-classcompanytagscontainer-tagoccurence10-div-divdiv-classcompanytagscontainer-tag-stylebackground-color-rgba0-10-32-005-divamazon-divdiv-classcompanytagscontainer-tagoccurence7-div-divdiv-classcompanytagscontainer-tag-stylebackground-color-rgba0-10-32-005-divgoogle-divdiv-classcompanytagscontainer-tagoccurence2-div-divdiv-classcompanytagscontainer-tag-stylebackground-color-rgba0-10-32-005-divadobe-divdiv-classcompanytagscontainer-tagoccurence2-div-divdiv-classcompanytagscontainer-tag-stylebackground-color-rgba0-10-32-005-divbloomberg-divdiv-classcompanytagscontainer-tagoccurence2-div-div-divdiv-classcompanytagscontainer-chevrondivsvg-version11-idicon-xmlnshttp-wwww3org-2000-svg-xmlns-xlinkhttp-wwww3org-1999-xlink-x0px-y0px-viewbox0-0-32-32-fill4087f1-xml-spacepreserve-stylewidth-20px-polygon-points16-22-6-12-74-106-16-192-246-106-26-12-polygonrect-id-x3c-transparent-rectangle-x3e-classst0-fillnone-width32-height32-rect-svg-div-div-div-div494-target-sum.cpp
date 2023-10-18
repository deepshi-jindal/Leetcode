class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum<abs(target)||(target+sum)%2!=0) return 0;
        int newtarget=(sum+target)/2;
        return countsubset(nums,newtarget);
    }
    int countsubset(vector<int>&arr,int target){
        int n=arr.size(),a=target;
        int dp[n+1][a+1];
    
         for(int i=0;i<a+1;i++)
             dp[0][i]=0;
        for(int j=0;j<n+1;j++)
            dp[j][0]=1;
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<a+1;j++){
                if(arr[i-1]<=j)
                    dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
    
    return dp[n][a];
    }
};