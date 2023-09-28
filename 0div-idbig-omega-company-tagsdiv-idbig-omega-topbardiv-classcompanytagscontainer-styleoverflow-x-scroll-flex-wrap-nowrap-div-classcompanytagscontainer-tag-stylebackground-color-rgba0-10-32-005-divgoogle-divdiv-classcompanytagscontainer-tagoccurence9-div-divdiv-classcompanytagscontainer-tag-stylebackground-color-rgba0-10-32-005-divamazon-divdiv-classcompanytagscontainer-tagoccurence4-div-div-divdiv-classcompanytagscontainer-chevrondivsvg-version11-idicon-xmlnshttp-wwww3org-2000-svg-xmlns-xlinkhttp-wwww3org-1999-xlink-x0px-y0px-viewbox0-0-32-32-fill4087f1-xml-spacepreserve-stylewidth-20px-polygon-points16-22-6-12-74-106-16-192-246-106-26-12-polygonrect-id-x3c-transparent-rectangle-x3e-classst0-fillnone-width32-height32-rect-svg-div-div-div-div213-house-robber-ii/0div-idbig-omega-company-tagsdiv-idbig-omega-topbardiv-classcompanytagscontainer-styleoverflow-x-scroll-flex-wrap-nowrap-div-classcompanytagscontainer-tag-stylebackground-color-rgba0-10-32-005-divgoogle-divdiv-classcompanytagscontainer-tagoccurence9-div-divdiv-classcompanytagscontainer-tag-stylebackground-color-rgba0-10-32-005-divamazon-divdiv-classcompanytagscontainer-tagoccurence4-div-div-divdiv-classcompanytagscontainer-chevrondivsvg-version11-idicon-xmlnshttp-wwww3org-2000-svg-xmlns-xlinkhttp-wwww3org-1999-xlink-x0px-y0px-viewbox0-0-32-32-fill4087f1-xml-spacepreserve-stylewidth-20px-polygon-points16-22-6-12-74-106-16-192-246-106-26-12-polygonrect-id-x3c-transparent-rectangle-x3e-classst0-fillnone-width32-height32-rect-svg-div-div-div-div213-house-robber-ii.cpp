class Solution {
public:
   /* int solve(vector<int> nums){
        int n=nums.size();
        vector<int> arr(n);
        if(n==0)
            return 0;
        if(n>=1)
            arr[0]= nums[0];
        if(n>=2)
            arr[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
            arr[i]=max(arr[i-1],arr[i-2]+nums[i]);
        return arr[n-1];
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
             return nums[0];
        return max(solve(vector<int>(nums.begin(),nums.end()-1)),solve(vector<int>(nums.begin()+1,nums.end())));*/
    int solve(vector<int> &num)
    {
        int n=num.size();
       int prev=num[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=num[i];
            if(i>1)
                take+=prev2;
            int nottake=0+prev;
            int curri=max(take,nottake);
            prev2=prev;
            prev=curri;
            
        }
            return prev;
    }
     int rob(vector<int> &nums)
    {
         int n=nums.size();
    vector<int> temp1,temp2;
    if(n==1)
        return nums[0];
    for( int i=0;i<n;i++){
        if(i!=0) temp1.push_back(nums[i]);
         if(i!=n-1) temp2.push_back(nums[i]);
    }
    return max(solve(temp1),solve(temp2));
    }
};