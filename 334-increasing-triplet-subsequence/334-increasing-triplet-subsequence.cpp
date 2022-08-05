class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        int i=INT_MAX;
        int j=INT_MAX;
        for(int a=0;a<n;a++){
            if(nums[a]<=i)
                i=nums[a];
            else if(nums[a]<=j)
                j=nums[a];
            else
                return 1;
        }
        return 0;
    }
};