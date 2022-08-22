class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                if(j==0)
                    matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j+1]);
                else if(j==col-1)
                    matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j-1]);
                else
                    matrix[i][j]+=min({matrix[i-1][j],matrix[i-1][j-1],matrix[i-1][j+1]});
                
            }
        }
        int sum=INT_MAX;
        for(int i=0;i<col;i++){
            sum=min(sum,matrix[row-1][i]);
        }
        return sum;
    }
};