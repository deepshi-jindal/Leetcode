class Solution {
public:
   // int dp[n];
    int climbStairs(int n) {
//         int a=1,b=1,c=0,i;
//         for(int i=2;i<=n;i++){
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         return b;
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
     }
};

 