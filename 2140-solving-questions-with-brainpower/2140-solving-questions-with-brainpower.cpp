class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long ans=0;
       vector<long long>dp(questions.size()+1,0);
        for(int i=questions.size()-1;i>=0;i--){
            int r=questions[i][1]+i+1;
            if(r>=questions.size())
                dp[i]=questions[i][0];
            else
                dp[i]=questions[i][0]+dp[r];
            ans=max(ans,dp[i]);
            dp[i]=max(dp[i],dp[i+1]);
        }
        return ans;
        
    }
};