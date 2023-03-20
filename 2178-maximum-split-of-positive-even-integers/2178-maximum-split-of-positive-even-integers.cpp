class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>ans;
        if(finalSum%2!=0)
            return {};
        long long sum= finalSum;
        long long e=2;
        while(sum-e>=e+2){
            ans.push_back(e);
            sum-=e;
            e+=2;
        }
        ans.push_back(sum);
        return ans;
    }
};