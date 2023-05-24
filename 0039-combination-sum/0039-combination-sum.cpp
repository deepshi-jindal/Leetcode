class Solution {
public:
    void findc(int ind,int target,vector<int>&c,vector<vector<int>>&arr,vector<int>&ds){
        if(ind==c.size()){
            if(target==0){
                arr.push_back(ds);
            }
            return;
        }
        if(c[ind]<=target){
            ds.push_back(c[ind]);
            findc(ind,target-c[ind],c,arr,ds);
            ds.pop_back();
        }
        findc(ind+1,target,c,arr,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> arr;
        vector<int>ds;
        findc(0,target,candidates,arr,ds);
        return arr;
    }
};