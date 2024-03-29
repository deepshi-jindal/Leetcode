class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
//        int maxsum=0;
//         vector<int>ans;
//         unordered_map<int,vector<int>>sumtoelements;
        
//         for(int i=nums.size()-1;i>=0;i--){
//             for(int j=0;j<nums[i].size();j++){
//                 maxsum=max(maxsum,i+j);
//                 sumtoelements[i+j].push_back(nums[i][j]);
//             }
//         }
//         for(int i=0;i<=maxsum;i++){
//             for(auto e: sumtoelements[i]){
//                 ans.push_back(e);         
//             }
        
//     }
//     return ans;
        vector<int>abs;
        queue<pair<int,int>>q;
        q.push({0,0});
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto[i,j]=q.front();
                q.pop();
                
                abs.push_back(nums[i][j]);
                
                if(j==0 && i+1<nums.size()){
                    q.push({i+1,j});
                }
                if(j+1<nums[i].size()){
                    q.push({i,j+1});
                }
            }
        }
        return abs;
}
};