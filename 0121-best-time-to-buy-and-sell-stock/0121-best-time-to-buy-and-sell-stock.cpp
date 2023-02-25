class Solution {
public:
    int maxProfit(vector<int>& prices) {
   /*     int maxprofit=0;
        int buy=INT_MAX;
        int n=prices.size();
        for(int i=1;i<=n;i++){
            buy=min(prices[i],buy);
            maxprofit=max(maxprofit,prices[i]-buy);
        }
        return maxprofit;*/
       int buy=INT_MAX;
        int max=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<buy)
                buy=prices[i];
            else if(prices[i]-buy>max)
                max=prices[i]-buy;
            
        }
        return max;
    }
};