class Solution {
public:
    int LCS(string s,string s1,int n){
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==s1[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
            
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        }
        return dp[n][n];
    }
       int minInsertions(string s) {
        int n = s.length();
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1));
        // for (int i = 0; i < n; ++i)
        //     for (int j = 0; j < n; ++j)
        //         dp[i + 1][j + 1] = s[i] == s[n - 1 - j] ? dp[i][j] + 1 : max(dp[i][j + 1], dp[i + 1][j]);
        // return n - dp[n][n];
           string s1=s;
           reverse(s.begin(),s.end());
           return n-LCS(s,s1,n);
    }
};