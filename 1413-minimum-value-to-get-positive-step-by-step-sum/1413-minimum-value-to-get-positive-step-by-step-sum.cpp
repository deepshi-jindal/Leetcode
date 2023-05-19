class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int sna=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            sna=min(sna,sum);
        }
        return abs(sna)+1;
    }
};