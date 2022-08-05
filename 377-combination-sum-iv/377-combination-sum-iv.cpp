// in this we will use dp approach as if target is already is already present in the array we don't need to find it again and time will save .
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        dp[0]=1;
        CS(nums,target,dp);
        return dp[target];
    }
    
    int CS(vector<int>& nums, int target, vector<int> &dp){
        if(dp[target]>-1) return dp[target];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=target)
            count+=CS(nums,target-nums[i],dp);
        }
        dp[target]=count;
        return count;
    }
};