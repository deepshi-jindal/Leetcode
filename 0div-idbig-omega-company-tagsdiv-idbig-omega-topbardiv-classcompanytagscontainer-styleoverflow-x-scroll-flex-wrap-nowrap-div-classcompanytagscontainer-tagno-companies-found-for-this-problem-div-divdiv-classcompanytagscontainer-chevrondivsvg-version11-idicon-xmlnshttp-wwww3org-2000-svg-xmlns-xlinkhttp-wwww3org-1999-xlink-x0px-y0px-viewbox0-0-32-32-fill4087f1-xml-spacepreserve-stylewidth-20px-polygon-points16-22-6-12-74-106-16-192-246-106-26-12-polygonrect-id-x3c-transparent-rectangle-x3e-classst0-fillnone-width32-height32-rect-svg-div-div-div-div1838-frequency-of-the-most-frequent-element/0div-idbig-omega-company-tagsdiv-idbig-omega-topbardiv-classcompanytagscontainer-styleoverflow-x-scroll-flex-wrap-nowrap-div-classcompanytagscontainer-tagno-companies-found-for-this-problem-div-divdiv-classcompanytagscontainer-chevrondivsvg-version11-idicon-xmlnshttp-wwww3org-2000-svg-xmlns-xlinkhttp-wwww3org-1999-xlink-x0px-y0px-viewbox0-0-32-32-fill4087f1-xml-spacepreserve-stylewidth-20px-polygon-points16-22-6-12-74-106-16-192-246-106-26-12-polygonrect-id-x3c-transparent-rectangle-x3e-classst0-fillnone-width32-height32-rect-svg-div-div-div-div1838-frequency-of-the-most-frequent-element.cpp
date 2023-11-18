class Solution {
public:
    
    
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
         sort(nums.begin() , nums.end());
         int number = k;
         int high = n - 1;
         int low = n - 1;
         int result = 0;
         while(low >= 0){
             while(low>=0 && high>=0 && (number >= (nums[high] - nums[low]))){
                 number -= (nums[high] - nums[low]);
                 low--;
             }
             result = max(result , high - low);
             int count = high - low - 1;
             if(high>0)number+=(count * (nums[high]-nums[high-1]));
             high--;
         }
         return result;
    }
};