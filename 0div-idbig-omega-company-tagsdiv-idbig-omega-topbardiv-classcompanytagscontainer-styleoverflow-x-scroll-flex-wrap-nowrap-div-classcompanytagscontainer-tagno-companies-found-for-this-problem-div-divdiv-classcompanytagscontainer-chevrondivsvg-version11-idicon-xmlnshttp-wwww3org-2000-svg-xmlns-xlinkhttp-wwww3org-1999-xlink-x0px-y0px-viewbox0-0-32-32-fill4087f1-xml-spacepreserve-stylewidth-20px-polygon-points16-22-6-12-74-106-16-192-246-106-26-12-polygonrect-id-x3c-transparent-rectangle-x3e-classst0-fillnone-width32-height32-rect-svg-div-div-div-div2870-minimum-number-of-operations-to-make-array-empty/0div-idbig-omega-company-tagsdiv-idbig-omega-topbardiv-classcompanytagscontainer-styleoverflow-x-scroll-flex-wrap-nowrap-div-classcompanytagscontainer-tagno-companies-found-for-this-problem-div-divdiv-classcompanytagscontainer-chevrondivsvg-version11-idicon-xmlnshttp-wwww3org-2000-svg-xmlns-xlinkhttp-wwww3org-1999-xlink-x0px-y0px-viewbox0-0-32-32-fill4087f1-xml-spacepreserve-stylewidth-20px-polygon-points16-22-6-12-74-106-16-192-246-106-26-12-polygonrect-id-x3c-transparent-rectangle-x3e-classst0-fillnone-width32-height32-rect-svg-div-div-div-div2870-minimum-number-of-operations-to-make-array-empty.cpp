class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int count=0;
        for(auto num:mp){
            if(num.second<2){
                return -1;
            }
           
         count+=((num.second+2)/3);
            
        }
        return count;
    }
};