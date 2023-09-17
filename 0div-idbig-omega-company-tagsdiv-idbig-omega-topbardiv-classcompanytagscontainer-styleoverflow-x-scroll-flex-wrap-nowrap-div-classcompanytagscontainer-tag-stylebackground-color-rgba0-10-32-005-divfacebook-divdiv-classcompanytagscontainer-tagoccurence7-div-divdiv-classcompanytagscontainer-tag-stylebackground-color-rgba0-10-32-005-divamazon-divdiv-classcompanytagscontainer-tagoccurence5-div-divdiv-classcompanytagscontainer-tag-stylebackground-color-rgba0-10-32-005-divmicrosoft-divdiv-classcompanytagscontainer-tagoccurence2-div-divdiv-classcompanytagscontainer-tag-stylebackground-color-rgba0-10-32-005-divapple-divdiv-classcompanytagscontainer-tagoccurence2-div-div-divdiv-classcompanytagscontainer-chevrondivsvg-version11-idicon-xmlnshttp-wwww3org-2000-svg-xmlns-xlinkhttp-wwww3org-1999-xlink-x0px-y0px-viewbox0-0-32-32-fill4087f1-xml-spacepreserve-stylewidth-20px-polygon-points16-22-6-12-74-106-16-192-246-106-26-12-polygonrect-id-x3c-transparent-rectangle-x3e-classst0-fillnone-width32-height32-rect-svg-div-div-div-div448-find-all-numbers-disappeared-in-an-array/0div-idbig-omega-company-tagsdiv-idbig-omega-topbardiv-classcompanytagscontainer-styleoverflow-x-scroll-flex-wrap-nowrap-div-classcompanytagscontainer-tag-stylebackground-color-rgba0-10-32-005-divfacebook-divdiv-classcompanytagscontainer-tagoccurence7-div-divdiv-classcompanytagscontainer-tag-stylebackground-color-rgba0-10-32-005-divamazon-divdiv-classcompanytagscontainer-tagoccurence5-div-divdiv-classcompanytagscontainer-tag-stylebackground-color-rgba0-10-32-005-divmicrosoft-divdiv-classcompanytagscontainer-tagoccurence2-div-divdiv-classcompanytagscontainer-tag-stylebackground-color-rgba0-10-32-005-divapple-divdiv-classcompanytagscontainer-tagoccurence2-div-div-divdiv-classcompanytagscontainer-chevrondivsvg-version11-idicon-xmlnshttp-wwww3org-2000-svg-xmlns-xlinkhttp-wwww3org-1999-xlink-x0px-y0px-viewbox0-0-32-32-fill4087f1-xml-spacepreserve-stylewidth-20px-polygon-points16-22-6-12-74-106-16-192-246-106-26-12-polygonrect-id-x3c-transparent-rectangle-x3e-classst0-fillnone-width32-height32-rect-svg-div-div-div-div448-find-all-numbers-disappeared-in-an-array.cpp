class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
       for(int i=0;i<n;i++){
           int num=abs(nums[i]);
            if (nums[num - 1] > 0) {
                nums[num - 1] = -nums[num - 1];
            }
       }
        for(int i=1;i<=n;i++){
            if(nums[i-1]>0){
                v.push_back(i);
            }
        }
        return v;
    }
};