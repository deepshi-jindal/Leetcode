//in this solution time limit exceed as TC=2^n
/*class Solution {
public:
    int rob(vector<int> &nums, int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        return max(rob(nums,n-1), rob(nums,n-2) + nums[n-1]);
    }    
    int rob(vector<int>& nums) {
        return rob(nums,nums.size());
    }
};*/

class Solution {
public:
    int rob(vector<int> &nums)
    {
        int n=nums.size();
         vector<int> a(n);
        if(n==0)
            return 0;
        if(n>=1)
            a[0]= nums[0];
        if(n>=2)
            a[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
            a[i]=max(a[i-1],a[i-2]+nums[i]);
        return a[n-1];
    }
};