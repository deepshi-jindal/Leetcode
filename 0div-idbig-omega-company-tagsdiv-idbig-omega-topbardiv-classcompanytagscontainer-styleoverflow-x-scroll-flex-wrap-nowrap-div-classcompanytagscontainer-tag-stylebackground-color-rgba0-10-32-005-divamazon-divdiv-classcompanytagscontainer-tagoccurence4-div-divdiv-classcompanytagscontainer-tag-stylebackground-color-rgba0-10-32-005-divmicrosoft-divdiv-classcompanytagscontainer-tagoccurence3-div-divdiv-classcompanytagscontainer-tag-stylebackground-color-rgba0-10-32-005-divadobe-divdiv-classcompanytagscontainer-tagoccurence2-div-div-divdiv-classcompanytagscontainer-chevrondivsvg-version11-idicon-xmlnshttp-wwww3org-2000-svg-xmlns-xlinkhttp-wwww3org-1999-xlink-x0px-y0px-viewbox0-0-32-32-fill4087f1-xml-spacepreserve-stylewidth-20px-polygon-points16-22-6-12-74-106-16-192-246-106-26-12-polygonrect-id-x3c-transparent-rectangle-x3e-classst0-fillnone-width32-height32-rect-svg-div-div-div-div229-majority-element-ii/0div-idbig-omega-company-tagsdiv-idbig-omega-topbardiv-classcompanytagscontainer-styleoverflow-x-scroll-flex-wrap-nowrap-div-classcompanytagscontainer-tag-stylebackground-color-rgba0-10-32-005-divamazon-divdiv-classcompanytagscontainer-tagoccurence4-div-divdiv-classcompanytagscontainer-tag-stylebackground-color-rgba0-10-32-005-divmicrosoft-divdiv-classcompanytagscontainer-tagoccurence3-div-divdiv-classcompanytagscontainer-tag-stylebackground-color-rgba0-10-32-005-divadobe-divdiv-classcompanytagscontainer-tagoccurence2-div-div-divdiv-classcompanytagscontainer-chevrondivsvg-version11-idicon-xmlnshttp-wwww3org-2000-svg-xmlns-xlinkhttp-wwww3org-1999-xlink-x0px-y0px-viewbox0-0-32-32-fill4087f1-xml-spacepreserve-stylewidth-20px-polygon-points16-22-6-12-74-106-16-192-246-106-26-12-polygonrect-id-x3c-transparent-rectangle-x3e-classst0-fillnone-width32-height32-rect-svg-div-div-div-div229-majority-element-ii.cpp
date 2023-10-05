class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c=nums.size()/3;
        unordered_map<int,int>mp;
        vector<int>arr;
        
        for(auto num:nums){
            mp[num]++;
        }
           for(auto num : mp){
            if(num.second > c){
                arr.push_back(num.first);
            }
        }
        return arr;
    }
};