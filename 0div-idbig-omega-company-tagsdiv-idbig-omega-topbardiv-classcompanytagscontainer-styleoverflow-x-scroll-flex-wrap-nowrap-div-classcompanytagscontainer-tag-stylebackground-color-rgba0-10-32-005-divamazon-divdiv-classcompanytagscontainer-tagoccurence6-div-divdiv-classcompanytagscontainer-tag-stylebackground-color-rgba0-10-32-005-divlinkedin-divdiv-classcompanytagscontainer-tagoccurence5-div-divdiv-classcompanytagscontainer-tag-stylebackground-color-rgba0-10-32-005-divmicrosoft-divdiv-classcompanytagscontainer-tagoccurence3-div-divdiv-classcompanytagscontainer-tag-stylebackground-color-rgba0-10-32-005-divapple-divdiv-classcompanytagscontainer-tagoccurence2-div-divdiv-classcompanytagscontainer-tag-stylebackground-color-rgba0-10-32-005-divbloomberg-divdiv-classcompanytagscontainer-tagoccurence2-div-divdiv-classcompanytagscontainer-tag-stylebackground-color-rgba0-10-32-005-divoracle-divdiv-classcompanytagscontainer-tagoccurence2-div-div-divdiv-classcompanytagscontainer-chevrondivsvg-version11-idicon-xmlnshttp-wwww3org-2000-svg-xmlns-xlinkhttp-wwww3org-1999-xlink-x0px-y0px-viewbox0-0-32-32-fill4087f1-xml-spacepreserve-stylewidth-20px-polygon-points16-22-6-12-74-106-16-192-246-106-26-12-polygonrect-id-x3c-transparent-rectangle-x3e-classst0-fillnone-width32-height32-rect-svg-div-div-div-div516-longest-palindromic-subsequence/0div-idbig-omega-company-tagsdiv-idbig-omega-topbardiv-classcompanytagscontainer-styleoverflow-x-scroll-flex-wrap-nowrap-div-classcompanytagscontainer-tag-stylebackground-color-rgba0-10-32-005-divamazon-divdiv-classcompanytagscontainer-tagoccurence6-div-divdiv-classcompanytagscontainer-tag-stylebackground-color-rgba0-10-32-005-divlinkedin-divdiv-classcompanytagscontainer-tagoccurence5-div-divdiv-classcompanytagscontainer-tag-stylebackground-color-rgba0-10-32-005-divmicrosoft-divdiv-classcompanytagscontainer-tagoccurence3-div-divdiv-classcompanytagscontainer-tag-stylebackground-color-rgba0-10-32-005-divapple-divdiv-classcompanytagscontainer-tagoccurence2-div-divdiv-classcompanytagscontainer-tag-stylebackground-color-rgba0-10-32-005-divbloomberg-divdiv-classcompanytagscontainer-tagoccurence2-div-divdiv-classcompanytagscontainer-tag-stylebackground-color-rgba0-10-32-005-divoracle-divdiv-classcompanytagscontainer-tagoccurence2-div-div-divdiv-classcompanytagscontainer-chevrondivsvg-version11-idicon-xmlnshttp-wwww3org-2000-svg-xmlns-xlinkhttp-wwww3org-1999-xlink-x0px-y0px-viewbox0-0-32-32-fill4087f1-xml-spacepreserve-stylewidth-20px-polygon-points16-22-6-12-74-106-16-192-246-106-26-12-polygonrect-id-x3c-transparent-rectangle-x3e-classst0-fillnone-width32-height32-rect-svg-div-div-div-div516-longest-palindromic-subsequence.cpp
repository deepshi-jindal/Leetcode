class Solution {
public:
    int LCS(int n,string s, string s1){
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
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
    int longestPalindromeSubseq(string s) {
        // int n = s.size();
        // vector<vector<int>> dp(n, vector<int>(n, 0));
        // for (int i = n - 1; i >= 0; i--) {
        //     dp[i][i] = 1;
        //     for (int j = i + 1; j < n; j++) {
        //         if (s[i] == s[j]) {
        //             dp[i][j] = dp[i+1][j-1] + 2;
        //         } else {
        //             dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        //         }
        //     }
        // }
        // return dp[0][n-1];
          int n=s.length();
        string s1=s;
        reverse(s.begin(),s.end());
      
        return LCS(n,s,s1);
    }
};
