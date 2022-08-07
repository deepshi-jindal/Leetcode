/*class Solution {
public:
    vector<vector<int>>ans;
    void permutations (vector<int> &nums ,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            permutations(nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums,0);
        return ans;
    }
};*/

class Solution {
public:
     vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
               }
      };