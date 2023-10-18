class Solution {
public:
    // int LCS(string text1,string text2,int n,int m){
    //     if(n==0 || m==0)
    //         return 0;
    //     if(text1[n-1]==text2[m-1])
    //         return 1+LCS(text1,text2,n-1,m-1);
    //     else
    //         return max(LCS(text1,text2,n-1,m),LCS(text1,text2,n,m-1));
    // }
    // int LCS(string text1,string text2,int n,int m,int dp[n+1][m+1]){  //VECTOR<VECTOR<INT>>&DP=USE
    //    if(n==0 || m==0)
    //        return 0;
    //     if(dp[n+1][m+1]!=-1)
    //         return dp[n+1][m+1];
    //      if(text1[n]==text2[m])
    //     {
    //         return dp[n+1][m+1] = (1+LCS(text1,text2,n-1,m-1,dp));
    //     }
    //     return dp[n+1][m+1]=max(LCS(text1,text2,n-1,m,dp),LCS(text1,text2,n,m-1,dp));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        // int res=LCS(text1,text2,n,m);
        // return res;
       //  int dp[n+1][m+1];
       //  memeset(dp,-1,sizeof(dp));
       // return LCS(text1,text2,n,m,dp);
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
       for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
};