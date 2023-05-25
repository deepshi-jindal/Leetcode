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
private:
     void recPermute(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans, int freq[]){
         if(ds.size()==nums.size()){
             ans.push_back(ds);
             return;
         }
         for(int i=0;i<nums.size();i++)
     {
         if(!freq[i]){
             ds.push_back(nums[i]);
             freq[i]=1;
             recPermute(ds,nums,ans,freq);
             freq[i]=0;
             ds.pop_back();
         }
     }
     }
    public:
     //vector<vector<int>> ans;
         vector<vector<int>> permute(vector<int>& nums) {
            // sort(nums.begin(),nums.end());
            //  do{
            //      ans.push_back(nums);
            //  }while(next_permutation(nums.begin(),nums.end()));
            //  return ans;
             vector<vector<int>> ans;
             vector<int>ds;
             int n=nums.size();
            int freq[nums.size()];
             for(int i=0;i<nums.size();i++)
                 freq[i]=0;
             recPermute(ds,nums,ans,freq);
             return ans;
             
             
     }
};

