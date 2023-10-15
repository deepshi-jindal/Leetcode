class Solution {
public:
    const int MOD=1e9+7;
    //   int range= min(steps,arrLen);
    //      vector<long>dp[steps+1][range+1];
    // int numways(int steps,int arrLen,int i){
    //     if(i>=arrLen || i<0 || steps<0)
    //         return 0;
    //     if(steps==0 && i==0) return 1;
    //     if(steps==0) return 0;
    //     if(dp[steps][i]!=0)
    //         return (int)dp[steps][i];
    //     long result=((numways(steps-1,arrLen,i+1)+numways(steps-1,arrLen,i-1))%MOD+numways(steps-1,arrLen,i))%MOD;
    //     dp[steps][i]=result;
    //     return (int)result;
    // }
    int numWays(int steps, int arrLen) {
        // int range= min(steps,arrLen);
        //  vector<long>dp[steps+1][range+1];
        // return numways(steps,range,0);
        int maxposition=min(steps/2,arrLen-1);
        vector<vector<int>>dp(steps+1,vector<int>(maxposition+1,0));
        dp[0][0]=1;
        for(int i=1;i<=steps;i++){
            for(int j=0;j<=maxposition;j++){
                dp[i][j]=dp[i-1][j];
                
                if(j>0){
                    dp[i][j]= (dp[i][j]+dp[i-1][j-1])%MOD;
                }
                if(j<maxposition){
                    dp[i][j]=(dp[i][j]+dp[i-1][j+1])%MOD;
                }
            }
        }
        return dp[steps][0];
    }
};