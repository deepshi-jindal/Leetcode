class Solution {
public:
      vector<vector<int>>ans;
    void permutations(vector<int> nums ,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[index])
                continue;
            swap(nums[i],nums[index]);
            permutations(nums,index+1);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      
        permutations(nums,0);
        return ans;
    }
};