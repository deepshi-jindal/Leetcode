class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
//         vector<int>res;
//         int sum;
//         for(int i=0;i<n;i++){
//             sum=0;
//             for(int j=0;j<n;j++)
//                 sum=sum+abs(nums[i]-nums[j]);
//              res.push_back(sum);
//         }
//             //    res.push_back(sum);
            
        
//         return res;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int left=0;
        int right=sum;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int a=nums[i];
            left+=a;
            res[i] = (a*i) - left + right - (a * (n - i-1));  
            right-=a;
        }
        return res;
    }
};