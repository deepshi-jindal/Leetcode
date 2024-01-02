class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int>count(n+10);
        for(int a:nums){
            if(ans.size()<=count[a])
                ans.push_back({});
                ans[count[a]++].push_back(a);
            }
        return ans;
    }
};