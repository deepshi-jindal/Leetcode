class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int temp;
        for(int i=0;i<r;i++){
            for(int j=0;j<i;j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c/2;j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][c-j-1];
                matrix[i][c-j-1]=temp;
            }
        }
        
    }
};