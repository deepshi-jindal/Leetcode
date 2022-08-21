/*class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int max=nums[0];
        int max_ending=nums[0];
        int min_ending=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max_ending;
            max_ending= max({nums[i], nums[i]*max_ending, nums[i]*min_ending});
             min_ending=min({nums[i],nums[i]*temp,nums[i]*min_ending});
            max=max(max,max_ending);
        }
           return max;
      
    }
};*/
/*class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            int curProd = 1;
            for(int j = i; j < nums.size(); j++)
                curProd *= nums[j],
                ans = max(ans, curProd);
        }
        return ans;
    }
};*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0) return -1;
        int currmax=nums[0],currmin=nums[0],finalmax=nums[0];
        for(int i=1;i<nums.size();i++){
           int temp=currmax;
           currmax=max(currmax*nums[i],max(currmin*nums[i],nums[i]));
           currmin=min(temp*nums[i],min(currmin*nums[i],nums[i]));
          // if(currmax>finalmax) finalmax=currmax;
            finalmax=max(currmax,finalmax);
        }
        return finalmax;
    }
};