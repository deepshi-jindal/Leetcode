class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums)
    {
       v.push_back(nums[0]);
       for(int i=1;i<nums.size();i++)
            v.push_back(nums[i]+v[i-1]);
    }
    int sumRange(int left, int right) 
    {
       if(left==0)
            return v[right];
        else
            return v[right]-v[left-1];
    }
};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
/*class NumArray {
public:
    vector<int> dp;
     NumArray(vector<int>& nums){
       int n=nums.size();
        dp=new int[n+1];
         dp[0]=0;
         for(int i=1;i<=n;i++){
             dp[i]=dp[i-1]+nums[i-1];
             
         }
     } 
           int sumRange(int left, int right) 
        {
               return dp[right+1] + dp[left];
           }
           }*/
    
         