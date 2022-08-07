/*class Solution {
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
};*/


class Solution {
public:
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      sort(nums.begin(),nums.end());
          vector<vector<int>>ans;
           ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
            ans.push_back(nums);
        return ans;
    }
};
