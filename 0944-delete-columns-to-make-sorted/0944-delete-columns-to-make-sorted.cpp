class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int dc=0;
        int r=strs.size();
        int c=strs[0].size();
        for(int j=0;j<c;j++){
            for(int i=0;i<r-1;i++){
                if(strs[i][j]>strs[i+1][j]){
                    dc++;
                    break;
                }
            }
        }
        return dc;
    }
};