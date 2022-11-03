class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int i=0;
        int n=1;
        while(1){
            if(candies<n){
                ans[i]+=candies;
                break;
            }
            
            ans[i]+=n;
            candies=candies-n;
            i=(i+1)%num_people;
            n++;
        }
        return ans;
    }
};