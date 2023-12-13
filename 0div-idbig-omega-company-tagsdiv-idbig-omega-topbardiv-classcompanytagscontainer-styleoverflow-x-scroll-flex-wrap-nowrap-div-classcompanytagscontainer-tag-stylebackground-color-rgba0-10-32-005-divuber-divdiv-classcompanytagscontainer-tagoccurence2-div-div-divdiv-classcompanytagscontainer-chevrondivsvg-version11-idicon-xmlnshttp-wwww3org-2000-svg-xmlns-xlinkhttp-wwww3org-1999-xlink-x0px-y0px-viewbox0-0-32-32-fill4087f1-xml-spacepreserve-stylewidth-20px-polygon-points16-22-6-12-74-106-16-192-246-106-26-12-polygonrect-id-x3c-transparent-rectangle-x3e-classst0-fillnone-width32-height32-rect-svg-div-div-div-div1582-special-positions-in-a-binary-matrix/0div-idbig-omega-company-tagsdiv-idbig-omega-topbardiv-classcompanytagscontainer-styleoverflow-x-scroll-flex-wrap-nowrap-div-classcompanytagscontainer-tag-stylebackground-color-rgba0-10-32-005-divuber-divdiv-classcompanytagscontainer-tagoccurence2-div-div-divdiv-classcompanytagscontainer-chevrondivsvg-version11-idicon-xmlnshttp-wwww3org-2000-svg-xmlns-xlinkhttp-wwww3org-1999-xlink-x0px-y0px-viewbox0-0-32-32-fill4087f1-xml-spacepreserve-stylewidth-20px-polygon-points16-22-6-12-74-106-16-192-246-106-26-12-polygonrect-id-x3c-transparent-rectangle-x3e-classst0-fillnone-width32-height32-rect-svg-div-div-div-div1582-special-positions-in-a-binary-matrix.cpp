class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // int nr=mat.size();
        // int nc=mat[0].size();
        // int res=0;
        // for(int i=0;i<nr;i++){
        //     for(int j=0;j<nc;j++){
        //         if(mat[i][j]==1){
        //             int csum=0;
        //             int rsum=0;
        //             for(int r=0;i<nr;r++){
        //                 csum+=mat[r][j];
        //             }
        //              for(int c=0;i<nc;c++){
        //                 rsum+=mat[i][c];
        //             }
        //             if(csum==1 && rsum==1)
        //                 res++;
        //         }
        //     }
        // }
        // return res;
        int nRows = mat.size();
		int nCols = mat[0].size();
		int res = 0;
		for(int i = 0; i < nRows; i++){
			for(int j = 0; j < nCols; j++){
				if(mat[i][j] == 1){
					int colSum = 0;
					int rowSum = 0;
					for(int r = 0; r < nRows; r++){
						colSum += mat[r][j];
					}
					for(int c = 0; c < nCols; c++){
						rowSum += mat[i][c];
					}
					if(colSum == 1 and rowSum == 1){
						res++;
					}
				}
			}
		}
		return res;
    }
};