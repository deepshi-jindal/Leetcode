/*class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        for(int i=0;i<numRows;i++){
            ans[i].resize(i+1);
        ans[i][0]=ans[i][i]=1;
        for(int j=1;j<i;j++)
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
        return ans;
    }
};*/
class Solution {
public:
    vector<vector<int>> generate(int n) { 
        vector<vector<int>> ar(n);
        ar[0].push_back(1);
        for(int i=2;i<=n;i++)
            for(int j=0;j<i;j++)
                if(j==0 || j==i-1) 
                    ar[i-1].push_back(1);
                else ar[i-1].push_back(ar[i-2][j] +ar[i-2][j-1]);
        return ar;
    }
};