class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()<0)
            return 0;
        int n=nums.size();
        // int ans=1;
        // for(int i=0;i<n;i++){
        //     ans*=nums[i];
        // }
        // return ans;
        sort(nums.begin(),nums.end());
        int m=nums[n-1]*nums[n-2]*nums[n-3];
        int l=nums[n-1]*nums[1]*nums[0];
        return max(m,l);
    }
};

