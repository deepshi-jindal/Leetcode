class Solution {
public:
    int find(vector<vector<int>> &grid, int i,int j){
        if(i<0 || i >=grid.size() || j<0 || j>=grid[0].size())
            return 0;
        if(grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        return (1+ find(grid,i-1,j) + find(grid,i+1,j) + find(grid ,i,j-1)+ find(grid,i,j+1));
            
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int x=0;
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j])
                    x=find(grid,i,j);
                    ans=max(ans,x);
                }
        }
            
        return ans;
    }
};