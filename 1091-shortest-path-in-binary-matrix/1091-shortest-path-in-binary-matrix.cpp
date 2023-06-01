class Solution {
public:
    bool isValidPoint(int x,int y,int m,int n){
        return x>=0 && x<=m && y>=0 && y<=n;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       
        int m=grid.size()-1;
        int n=grid[0].size()-1;
         if(grid[0][0] || grid[m][n])
            return -1;
        vector<int>curr;
        queue<vector<int>>q;
        q.push({0,0});
        grid[0][0]=1;
        
        while(!q.empty()&&!grid[m][n]){
            curr=q.front();
            q.pop();
            
            for(int i=0;i<8;i++){
                int x=curr[0]+x_p[i];
                int y=curr[1]+y_p[i];
                
                if(isValidPoint(x,y,m,n) && grid[x][y]==0){
                     grid[x][y]=grid[curr[0]][curr[1]]+1;
               q.push({x,y});
                }
            }
        }
        return grid[m][n]?grid[m][n]:-1;
    }
    private:
    vector<int>x_p={-1,-1,-1,0,0,1,1,1};
    vector<int>y_p={-1,0,1,-1,1,-1,0,1};
};