class Solution {

public:
       /* int f(int i,int j,string &w1,string &w2,vector<vector<int>>&dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(w1[i]==w2[j]) return dp[i][j]=f(i-1,j-1,w1,w2,dp);
        return dp[i][j]=1+ min(f(i-1,j,w1,w2,dp),min(f(i,j-1,w1,w2,dp),f(i-1,j-1,w1,w2,dp)));
            
    }*/
    int minDistance(string word1, string word2) {
      /*  int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m-1));
        return f(n-1,m-1,word1,word2,dp);*/
        //table to store result of subproblems
        int dp[word1.size()+1][word2.size()+1];
        // If first string is empty, only option is to 
// insert all characters of second string 
        for(int k=0;k<=word1.size();k++){
            dp[k][0]=k;
        }
        // If second string is empty, only option is to 
// insert all characters of first string 
        for(int k=0;k<=word2.size();k++){
            dp[0][k]=k;
        }
        // Fill dp[][] in bottom up manner 
        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min({dp[i][j-1]//insert
                    , dp[i-1][j]//remove
                    ,dp[i-1][j-1]});//replace
            }
        }
           return dp[word1.size()][word2.size()]; 
    }
};
