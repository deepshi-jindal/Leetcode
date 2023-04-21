class Solution {
public:
    int dp[101][101][101];
    int MOD=1e9+7;
    int solve(int memberselected, int currProfit, int index,int n, int minProfit, vector<int>&group,vector<int>&profit){
        if(index>=group.size()){
            return currProfit >= minProfit;
        }
        if(dp[index][memberselected][currProfit]!=-1){
            return dp[index][memberselected][currProfit];
        }
        int nonSelect = solve(memberselected, currProfit,index+1,n,minProfit,group,profit);
        int select=0;
          if (memberselected + group[index] <= n) {
            select += solve(memberselected + group[index], min(minProfit, currProfit + profit[index]), index+1, n, minProfit, group, profit);
        }
        return dp[index][memberselected][currProfit] = (nonSelect%MOD + select%MOD)%MOD;
    }
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0,n,minProfit,group,profit);
    }
};



