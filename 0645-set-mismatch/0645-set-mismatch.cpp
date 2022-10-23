class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int common=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
    common=nums[i];
            break;
        }
}
        int sum=(nums.size()+1)*nums.size()/2;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
        }
        return {common,sum+common};
    }
};