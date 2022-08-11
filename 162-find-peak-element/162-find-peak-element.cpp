class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n<2 || nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        int l=0;
        int r=n-1;
        int mid;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            if(nums[mid]<nums[mid+1])
                l=mid+1;
            else
                r=mid;
        }
        return mid;
    }
};