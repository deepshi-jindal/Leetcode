class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> qp;
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),-1));
        //starting nodes are 0 so marks them in ans as 0 as distance from 0 is 0
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    qp.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        //apply BFS
        while(!qp.empty()){
            int m=mat.size();
            int n=mat[0].size();
            int i=qp.front().first;
            int j=qp.front().second;
            //check for neighbors
            if(checkvalid(i+1,j,m,n) && ans[i+1][j]==-1){
                qp.push({i+1,j});
                ans[i+1][j]=ans[i][j]+1;
            }
                
                if(checkvalid(i-1,j,m,n) && ans[i-1][j]==-1){
                      qp.push({i-1,j});
                ans[i-1][j]=ans[i][j]+1;
                }
                    
                    if(checkvalid(i,j-1,m,n) && ans[i][j-1]==-1){
                          qp.push({i,j-1});
                ans[i][j-1]=ans[i][j]+1;
                    }
                        
                        if(checkvalid(i,j+1,m,n) && ans[i][j+1]==-1){
                              qp.push({i,j+1});
                ans[i][j+1]=ans[i][j]+1;
                        }
            qp.pop();
        }
        return ans;
    }
        
        
        bool checkvalid(int i,int j,int m,int n){
            if(i<0 || j<0 ||i>=m || j>=n)return false;
            return true;
        }
    
};