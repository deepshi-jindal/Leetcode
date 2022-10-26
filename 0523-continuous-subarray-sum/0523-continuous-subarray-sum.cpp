class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0 && i>0)
                return true;
            if(mp.find(rem)==mp.end()){
                mp[rem]=i;
            }
            else if(i-mp[rem]>=2){
                return true;
            }
        }
        return false;
    }
};