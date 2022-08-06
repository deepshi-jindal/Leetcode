class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        if(grid.size()==0) 
            return 0;
        queue<pair<int,int>> qu;
        int time=0;
        int count=0;
        int col=grid[0].size();
        int row=grid.size();
        int count_oranges=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]!=0) 
                    count_oranges++;
                if(grid[i][j]==2) 
                    qu.push({i,j});
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!qu.empty())
        {
            int k=qu.size();
            count+=k;
            while(k!=0)
            {
                int x=qu.front().first;
                int y=qu.front().second;
                for(int i=0;i<4;i++)
                {
                    int a=x+dx[i];
                    int b=y+dy[i];
                    if(a<0 || b<0 || a>=row || b>=col)
                        continue;  
                    if(grid[a][b]==1)
                    {
                        grid[a][b]=2;
                        qu.push({a,b});
                    }   
                }  
                qu.pop(); 
                k--;
            }   
            if(!qu.empty())
            time++;
        }
        if(count==count_oranges)
            return time;
        return -1;
    }
};
