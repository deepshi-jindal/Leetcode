class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      /*  int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    return true;
            }
        }
        return false;*/
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
        return true;
        }
        return false;
    }
   
};