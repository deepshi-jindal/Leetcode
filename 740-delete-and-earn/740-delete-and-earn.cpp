class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> freq(10001,0);
        for(int i: nums)
            freq[i]+=i;
        int prev=0;
        int curr=0;
        for(int i=0;i<10001;i++){
            int temp = max(prev+freq[i],curr);
            prev=curr;
            curr=temp;
        }
            return curr;
        
    }
};